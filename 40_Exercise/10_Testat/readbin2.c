#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_title 60
#define max_author 50
#define max_pub 50
#define max_recs 40

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
