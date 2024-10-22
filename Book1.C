// My structure
#include <stdio.h>
#include<string.h>
struct book {
    char title[30];
    char author[30];
    int publication_year;
    float price;
    char ISBN[13];
}book, title, author, ISBN, publication_year, price;
int main() {
    strcpy(book.title, "Introduction to C programming");
    strcpy(book.author, "John Smith");
    strcpy(book.ISBN, "9780131103627");
    book.publication_year=2022;
    book.price=49.99;
    
    printf("Title: %s\n",book.title);
    printf("Author: %s\n",book.author);
    printf("ISBN: %s\n",book.ISBN);
    printf("Publication_year: %d\n",book.publication_year);
    printf("Price: %.2f\n",book.price);
    
    
    return 0;
}