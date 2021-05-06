//Code to read and transfer the bin file

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max_system 4
#define max_alarm 1
#define max_recs 10


	// Our structure
	struct rec
	{
		long long time;
		int pressure;
		char system[max_system];
		char alarm[max_alarm];
	};
	
	int main()
	{
		struct rec my_record[max_recs];
		int i;
		FILE *ptr_myfile;

		ptr_myfile=fopen("pressureSpike.bin","rb");
		
		if (!ptr_myfile)
		{
			printf("Unable to open file!");
			return 1;
		}

		fseek(ptr_myfile, sizeof(struct rec), SEEK_END);
		rewind(ptr_myfile);


   		for(i = 1; i < max_recs; i++) {
	   		fread(&my_record[i].time, sizeof(long long), 1, ptr_myfile);
	   		fread(&my_record[i].pressure, sizeof(int), 1, ptr_myfile);
	   		fread(&my_record[i].system, sizeof(char), 1, ptr_myfile);
	    		fread(&my_record[i].alarm, sizeof(char), 1, ptr_myfile);
  		}

		
		for(i = 1; i < max_recs; i++) {
               	printf("\nTime: %lld", my_record[i].time);
               	printf("\nPressure: %d", my_record[i].pressure);
               	printf("\nSystem State: %s", my_record[i].system);
           		printf("\nAlarm State: %s", my_record[i].alarm);
               	printf("\n");
    		}
		
		fclose(ptr_myfile);
		return 0;
	}




