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

// the code above is made to take in inputs for example l1 these inputs contain elements of a structure. Elements such as students their school rates and what gender they are. the structure is called library.

typedef struct{

    char title[50];
    char author[50];
    int pages;
}book;

void printBook(book b){

    
    printf("The title of this book is %s\nand it was written by %s\nIt Consists of %d pages\n\n", b.title, b.author, b.pages);

} // this function is used to print the books in a neat manner instead of having multiple printf statements making your code dirty. Clean Code is good code.

void addBook(book *d, char a[], char x[], int y){

    strcpy(d->title, a);
    strcpy(d->author, x);
    d->pages = y;

} // this function uses pointers in specific terms the pointer *d is used to label the data that will be used in the function for example as you can see its being pointed to title and author and pages. the function i made it so i can add books easier.

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
} // epic c code with comments :D
