#include<stdio.h>
int main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	switch(a/abs(a)){
		case 1:
			printf("Positive");
			break;
		case -1:
			printf("Negative");
			break;
		default:
			printf("Zero");
	}
}