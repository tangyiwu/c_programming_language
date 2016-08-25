#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int len;

   /*复制 str1 到 str2*/
   strcpy(str3, str1);
   printf("strcpy(str3, str1) : %s\n", str3);

   /*连接str1 到 str2*/
   strcat(str1, str2);
   printf("strcat(str1, str2) : %s\n", str1);

   /*可连接后，str1的总长度*/
   len = strlen(str1);
   printf("strlen(str1) : %d\n", len);

   return 0;
}