#include <stdio.h>

int main() {

int a,b;
printf("Enter a number");
scanf("%d",&a);
printf("Enter another number");
scanf("%d",&b);

/*
if (a>b){
	printf("yes\n");
	}
else if (a==b) {
	printf("ok\n");
	}
else{
	printf("no\n");
	}
*/

//(a>b)? printf("YES\n") : (a==b) ? printf("OK\n") : printf("NO\n");

/*switch(a/b){
	
	case 1:
		printf("OK\n");
		break;
	default:
		printf("NOT OK \n");
		break;
	
	
	}
	*/
/*
if (a>b){
	while (a>b){
		b++;
		printf("%d yes\n",b);
		}
	}
else if (a==b) {
	printf("ok\n");
	}
else{
	while (a<b){
		b--;
		printf("%d no\n",b)	;
		}
	}
*/
/*		do{
		b++;
		printf("%d yes\n",b);
		}
		while (a>b);
*/
/*	int i = 0;
	int j;
	while (i<a){
		j=0;
		while (j<i){
		printf("1 ");
		j++;
		}
	printf("\n");
	i++;
	}
	*/
	/*for(int i=0;i<=a;i++){
		for(int j=(a-i);j>0;j--){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("1 ");
		}
		printf("\n");
	}
	*/
}