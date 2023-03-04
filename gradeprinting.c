#include<stdio.h>
int main(){
	float mark;
	printf("enter the marks");
	scanf("%f",&mark);
	if(mark>=90){
		printf("S Grade");
		}
	else if (90>mark>=80){
		printf(" A grade");
	}
	else if (80>mark>=70){
		printf(" B grade");
	}
	else if (70>mark>=60){
		printf(" C grade");
	}
	else if (60>mark>=50){
		printf(" D grade");
	}
	else {
		printf("F grade");
	}
}
