#include <stdio.h>
void number(int a);
void number(int a){
    if(a==0){
        return;
    } 
    printf("%d\n",a);
    number(a-1);
}
int main(){
      number(5);
    return 0;
}
