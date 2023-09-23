#include <stdio.h>

int main(void) {
   char c;

   printf("enter a character: ");
   scanf("%c", &c);// 만약 숫자5를 넣었어도 문자로 받아들여서 아스키코드5가 들어감.


   printf("The next character of %c (%d) is %c (%d) \n", c,c,c+1,c+1); 

   system("PAUSE");
   return 0;
}
