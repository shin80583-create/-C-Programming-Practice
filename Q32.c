#include<stdio.h>
int main(){
	printf("press 1 git addition\n");
	printf("when press 2 git subraction\n");
	printf(" when press 3 git multipletion\n");
	printf("when press 4 git division\n");
	int a,b,c,d,e,f,g,h,i,j;
	do
	{
//	int a,b,c,d,e,f,g,h,i,j;
	printf("enter the number =");
	scanf("%d",&a);
	//switch for found section 
	switch(a){
		case 1:
			printf("this program for addition\n");
		    printf("enter the number:");
		    scanf("%d",&b);
		    printf("enter the number :");
		    scanf("%d",&c);
		    printf("total=%d\n",b+c);
		break;
		case 2:
			printf("this program for subtraction\n");
		    printf("enter the number:");
		    scanf("%d",&d);
		    printf("enter the number:");
		    scanf("%d",&e);
		    printf("total=%d\n",d-e);
		break;
		case 3:
			printf("this program for multipletion\n");
			printf("enter the number:");
			scanf("%d",&f);
			printf("enter the number:");
			scanf("%d",&g);
			printf("total:%d\n",f*g);
		break;
		case 4:
			printf("this program for division\n");
			printf("enter the number:");
			scanf("%d",&h);
			printf("enter the number:");
			scanf("%d",&i);
			printf("total=%d\n",h/i);
		break;
		default:
			printf("invalid\n");
	}
	printf("enter the 1 to comtiune and o to exit:\n");
	scanf("%d",&j);
	
} while(j==1);
	printf("close\n");

	return 0;
}
