#include <stdio.h>

int main(void) {
   char c;
   int i;

   printf("input a number:");
   scanf("%c", &c);// 만약 숫자5를 넣었어도 문자로 받아들여서 아스키코드5가 들어감.

   i=c-'0';
   printf("The input numbe ASCII is %i\n",c);
   printf("The input number is %i \n", i); 

   system("PAUSE");
   return 0;
}
