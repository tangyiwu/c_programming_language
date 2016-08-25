#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

int main ()
{
   Book book;

   strcpy(book.title, "C Pargramming");
   strcpy(book.author, "Nuha Ali");
   strcpy(book.subject, "C Pargramming Tutorial");
   book.book_id = 6495407;

   printf("book title: %s\n", book.title);
   printf("book author: %s\n", book.author);
   printf("book subject: %s\n", book.subject);
   printf("book book_id: %d\n", book.book_id);

   return 0;
}