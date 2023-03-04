#include <stdio.h>

int main(){
int c;
int fix=1;
int a[] = {2,3,446344,54,16,17,81,99};
int soa= sizeof(a)/sizeof(a[0]);
while (fix==1){
	for(int j=0;j<(soa-1);j++){
		if (a[j]>a[j+1]){
			fix=1;
			break;
			}
		fix=0;
	}
	for(int i=0;i<(soa-1);i++){
		if (a[i]>a[i+1]){
			c=a[i+1];
			a[i+1]=a[i];
			a[i]=c;
		}

	}


	}
		for (int k = 0; k <soa; k++) {
		printf("%d\n", a[k]);
			}



}