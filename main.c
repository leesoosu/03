#include <stdio.h>

int main(void) {
   char c;

   printf("enter a character: ");
   scanf("%c", &c);// ���� ����5�� �־�� ���ڷ� �޾Ƶ鿩�� �ƽ�Ű�ڵ�5�� ��.


   printf("The next character of %c (%d) is %c (%d) \n", c,c,c+1,c+1); 

   system("PAUSE");
   return 0;
}
