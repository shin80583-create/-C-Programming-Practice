#include <stdio.h>
 void number(int *n);
  void number(int *n){
    *n=(*n)*(*n);
    printf("%d\n",*n);
  }
int main(){
    int a=2;
    printf("%d\n",a);
    number(&a);
     printf("%d\n",a);
    return 0;
}
