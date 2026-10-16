#include<stdio.h>
int main(){
	int a=5;
	int n;
	int b;
	do
	{
	   printf("enter the number:");
	   scanf("%d",&n);
	   if(n!=5){
	   printf("try agnin");
	   }
   else if(n==5){
   		printf("corract\n");
   		break;
   }
   printf("\nenter the number for contiune 1 and 0 for exit");
   scanf("%d",&b);
	}while(b==1);
	printf("thank you playing");
	return 0;
}
