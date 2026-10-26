#include <stdio.h>

int number(int a);
int number(int a){
   if (a==0)
    {
        return ; 
    }
    printf("%d\n",a);
    return a*number(a-1);
}
int main() {
    int a=number(5);
    printf("total=%d\n",a);

    return 0;
}
