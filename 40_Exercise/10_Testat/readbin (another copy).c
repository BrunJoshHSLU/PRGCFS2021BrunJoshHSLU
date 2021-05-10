//Code to read and transfer the bin file


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max_system 4
#define max_alarm 1
#define max_recs 5


	// Our structure
	struct rec {
		long long time;
		int pressure;
		char system[max_system];
		char alarm[max_alarm];
	};
	
	int main()
	{
		//Read
		struct rec my_record[max_recs];
		int i;
		FILE *ptr_myfile;

		ptr_myfile=fopen("pressureSpike.bin","rb");
		
		if (!ptr_myfile)
		{
			printf("Unable to open file!");
			return 1;
		}

		fseek(ptr_myfile, sizeof(struct rec), SEEK_SET);
		rewind(ptr_myfile);
		

   		for(i = 1; i < max_recs; i++) {
   			fread(&my_record[i].time, sizeof(long long), 1, ptr_myfile);
	   		fread(&my_record[i].pressure, sizeof(int), 1, ptr_myfile);
	   		fread(&my_record[i].system, sizeof(char), 1, ptr_myfile);
	    		fread(&my_record[i].alarm, sizeof(char), 1, ptr_myfile);
  		}

		
 
		for(i = 1; i < max_recs; i++) {
               	printf("Time: %lld\n", my_record[i].time);
               	printf("Pressure: %d\n", my_record[i].pressure);
               	printf("System State: %s\n",my_record[i].system);
           		printf("Alarm State: %s\n", my_record[i].alarm);
               	printf("\n");
    		}
		
		fclose(ptr_myfile);
		
		
		
		
		//Write
		
		//file pointer
    		FILE *fp = NULL;
    		//create and open the text file
   		 fp = fopen("csv.csv", "wb");
   		 if(fp == NULL)
   		 {
       		 printf("Error in creating the file\n");
       		 exit(1);
    		}
    		//write the structure array in file
    		
    		fwrite(my_record, sizeof(my_record),1, fp);
    		
    		
    		fclose(fp);
 		
		
		return 0;
	}

























/*
// fread_fwrite.c
#include <stdio.h>
#include <stdlib.h>

struct {
   long long time;
   int pressure;
   char system[4];
   char alarm[1];
} records;

void speichern(void) {
   FILE *save = fopen("pressureSpike.bin","r+b");
   if( NULL == save ) {
      save = fopen("pressureSpike.bin","w+b");
      if( NULL == save ) {
         fprintf(stderr,"Kann \"adressen.dat\" nicht öffnen!\n");
         return;
      }
   }
   // FILE-Zeiger save auf das Ende der Datei setzen 
   fseek(save, 0, SEEK_END);

   // Wir schreiben eine Adresse ans Ende von "adressen.dat". 
   if(fwrite(&records, sizeof(records), 1, save) != 1) {
      fprintf(stderr, "Fehler bei fwrite...!!!\n");
      return;
   }
   // Wir geben unseren FILE-Zeiger wieder frei. 
   fclose(save);
}

void ausgabe(void) {
   FILE *output = fopen("pressureSpike.bin","r+b");
   if( NULL == output ) {
      fprintf(stderr,"Kann \"adressen.dat\" nicht öffnen!\n");
      return;
   }
   // Wir lesen alle Adressen aus "pressureSpike.bin". 
   while(fread(&records, sizeof(records), 1, output) == 1) {
      printf("time...........: %lld\n",records.time);
      printf("pressure.......: %d\n",records.pressure);
      printf("system.........: %s\n",records.system);
      printf("alarm..........: %s\n",records.alarm);
      printf("\n\n");
   }
   fclose(output);
}


void eingabe(void) {
   printf("Vorname...........:");
   fgets(adressen.vorname, sizeof(adressen.vorname), stdin);
   printf("Nachname..........:");
   fgets(adressen.nachname, sizeof(adressen.nachname),stdin);
   printf("Strasse...........:");
   fgets(adressen.strasse, sizeof(adressen.strasse), stdin);
   printf("Hausnummer........:");
   fgets(adressen.hausnummer,sizeof(adressen.hausnummer),stdin);
   printf("Postleitzahl......:");
   fgets(adressen.plz, sizeof(adressen.plz), stdin);
   printf("Ort...............:");
   fgets(adressen.ort, sizeof(adressen.ort), stdin);
   printf("Sternzeichen......:");
   fgets(adressen.sternzeichen,sizeof(adressen.sternzeichen),
      stdin );
   printf("Alter.............:");
   fgets(adressen.alter, sizeof(adressen.alter), stdin);
   speichern();
}

//int main(void) {

speichern();
ausgabe();

   return 0;
}

*/

