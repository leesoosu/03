#include <stdio.h>

int main(void) {
   float a,b;

   printf("분자를 입력하세요:");
   scanf("%d", &a);

   printf("분모를 입력하세요:");
   scanf("%d", &b);

   printf("나누기의 결과는 %f입니다.",a/b); 

   system("PAUSE");
   return 0;
}
