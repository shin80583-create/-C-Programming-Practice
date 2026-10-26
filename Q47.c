#include <stdio.h>
void number(int b);
void number(int b){
    int a=1;
    for (a;a<=b; a++)
    {
      if (a==10000)
      {
        break;
      }
        printf("%d\n",a);
    }
}
int main() {
    int b;
    printf("enter the number");
    scanf("%d",&b);
    number(b);
    return 0;
}
