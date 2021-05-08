#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_title 60
#define max_author 50
#define max_pub 50
#define max_recs 40

/*
struct record {
    char title[max_title];
    char author[max_author];
    char publisher[max_pub];
    float price;
};

int main() {
    struct record book[max_recs];
    FILE * fp;
    fp = fopen("book.dat", "rb");
    int fileSize = 0;
    int i = 0;

    for(i = 0; i < 40; i++) {
	    fread(&book[i].title, max_title, 1, fp);
	    fread(&book[i].author, max_author, 1, fp);
	    fread(&book[i].publisher, max_pub, 1, fp);
	    fread(&book[i].price, sizeof(float), 1, fp);
    }

        for(i = 0; i < 40; i++) {
                printf("\nTitle: %s", book[i].title);
                printf("\nAuthor: %s", book[i].author);
                printf("\nPublisher: %s", book[i].publisher);
            printf("\nPrice: %.2f", book[i].price);
                printf("\n");
    }
}
*/







typedef struct
{
    int id;
    char fName[16];
    char lName[16];
} s_employee;
int main()
{
    //Populate variable of array of structure
    s_employee sAticleworldEmplInfo[] =
    {
        {1, "Amlendra", "Mishra"},
        {2, "Pooja", "Mishra"},
        {3, "Apoorv", "Mishra"},
        {4, "Amitosh", "Mishra"},
        {5, "Maya", "Mishra"},
        {6, "Uday", "Mishra"},
    };
    //file pointer
    FILE *fp = NULL;
    //create and open the text file
    fp = fopen("aticleworld.csv", "wb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //write the structure array in file
    fwrite(sAticleworldEmplInfo, sizeof(sAticleworldEmplInfo),1, fp);
    fclose(fp);
    return 0;
}
