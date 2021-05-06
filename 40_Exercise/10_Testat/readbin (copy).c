//Code to read and transfer the bin file

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max_system 4
#define max_alarm 1
#define max_recs 1920

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
		int counter;
		FILE *ptr_myfile;

		ptr_myfile=fopen("pressureSpike.bin","rb");
		
		if (!ptr_myfile)
		{
			printf("Unable to open file!");
			return 1;
		}

		fseek(ptr_myfile, sizeof(struct rec), SEEK_SET);
		rewind(ptr_myfile);

		for ( counter=1; counter <= struct rec my_record[max_recs];; counter++)
		{
			fread(&my_record,sizeof(struct rec)+1,1,ptr_myfile);
			
			printf("%lld\n", my_record.time);
			printf("%d\n", my_record.pressure);
			printf("%d\n", my_record.system);
			printf("%d\n", my_record.alarm);
		}
		fclose(ptr_myfile);
		return 0;
	}




