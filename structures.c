#include <stdio.h>
#include <string.h>

// typedef struct{
//     int students;
//     int rates;
//     char gens[10];

// }library;

// int main(){

//     library l1 = {10, 5, "Males"};
//     library l2 = {12, 8, "Females"};

//     printf("Students in the library are %d\nTheir rates are %d\nAnd this statement indicates they are %s\n", l1.students, l1.rates, l1.gens);
// }

typedef struct{

    char title[50];
    char author[50];
    int pages;
}book;

void printBook(book b){

    
    printf("The title of this book is %s\nand it was written by %s\nIt Consists of %d pages\n\n", b.title, b.author, b.pages);

}

void addBook(book *d, char a[], char x[], int y){

    strcpy(d->title, a);
    strcpy(d->author, x);
    d->pages = y;

}

int main(){

    book b1 = {"Harry Potter", "J.K Rowlings", 600};
    book b2 = {"Laws Of Human Nature", "Robert Green", 1000};
    book b3 = {"The Weaving Of Chaos", "Ryan Charkuoth", 99999};
    book b4 = {"", "", 0};

    addBook(&b4, "C Programming", "Dennis Ritchie", 1405);

    printBook(b1);
    printBook(b2);
    printBook(b3);
    printBook(b4);

    return 0;
}