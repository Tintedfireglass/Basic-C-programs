#include<stdio.h>
int main(){
	float age;
	printf("enter the age");
	scanf("%f",&age);
	if(age>65){
		printf("very old");
		}
	else if (65>=age>36){
		printf("old");
	}
	else if (36>age>20){
		printf("adult");
	}
	else if (20>=age>13){
		printf("Teen");
	}
	else {
		printf("child");
	}
}
