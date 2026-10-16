#include <stdio.h>
int main(){ 
	int i;
	int sum=0;
	for(i=2;i<=20;i=i+2){
		//printf("sum=%d\n",i+i);
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;
}
