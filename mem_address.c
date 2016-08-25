#include <stdio.h>

int main ()
{
   int  var1;
   char var2[10];

   printf("var1 变量的地址： %x\n", (unsigned int)&var1  );
   printf("var2 变量的地址： %x\n", (unsigned int)&var2  );

   return 0;
}