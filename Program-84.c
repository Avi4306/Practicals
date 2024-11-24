// WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.
#include <stdio.h>

struct Book
{
    char title[100];
    char author[100];
    float price;
};

void readAndDisplayBookInfo(struct Book *b)
{
    printf("Enter the book title: ");
    scanf(" %[^\n]s", b->title);
    printf("Enter the author's name: ");
    scanf(" %[^\n]s", b->author);

    printf("Enter the price of the book: ");
    scanf("%f", &b->price);

    printf("\nBook Information:\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Price: %.2f\n", b->price);
}

int main()
{
    struct Book book1;

    readAndDisplayBookInfo(&book1);

    return 0;
}
