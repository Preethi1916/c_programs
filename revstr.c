#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;
   printf("Input a string\n");
   gets(s);
   while (s[count] != '\0')
      count++;
	end = count - 1;

   for (begin = 0; begin < count; begin++) 
   {
      r[begin] = s[end];
      end--;
   }
	printf("%s\n", r);

   return 0;
}
