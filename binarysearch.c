#include <stdio.h>


int main(){
	
// input array

int n;
printf("Enter number of elements in array");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
	printf("Next Element");
	scanf("%d",&a[i]);
	}
	
	
//sort array
	
	
int c;
int fix=1;
while (fix==1){
	for(int j=0;j<(n-1);j++){
		if (a[j]>a[j+1]){
			fix=1;
			break;
			}
		fix=0;
	}
	for(int i=0;i<(n-1);i++){
		if (a[i]>a[i+1]){
			c=a[i+1];
			a[i+1]=a[i];
			a[i]=c;
		}

	}
}
	
for (int k = 0;k<n; k++) {
		printf("%d\n", a[k]);
			}

// search through array


int s;
printf("Enter the digit to  be searched");
scanf("%d",&s);
int fnd=0;
int min=0;
int max=n-1;
printf("hello world");
while(min!=max){

			if (s<a[(max-min)/2]){
				max=a[(max-min)/2];
				printf("%d",max);
			}
			else if(s>a[(max-min)/2]){
				min=a[(max-min)/2];
				printf("%d",min);
		}
			else if(s==a[(max-min)/2]){
				max=min=a[(max-min)/2];
				fnd=1;
				break;
		}

		

// Gives the desired output for the program

	}
if (fnd=1){
	printf("the position of the number is : %d\n",min);
	}
else{
	printf("NOT FOUND");
	}	

}

