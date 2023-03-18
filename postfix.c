#include <stdio.h>
#include <string.h>
#include <ctype.h>   
int arr[5];
int tp=-1;
 char post[5] = {'3','5','+','3','*'};
void push(int a){
    tp++;
    arr[tp]=a;
}
int pop(){
    int a = arr[tp];
    tp--;
    return(a);
}
void main(){

   
    for(int i=0;i<5;i++){
		
        if (post[i]>47){
            push(post[i]-48);
            }
        else {

                if (post[i]==42){
				int b = pop();
				int a = pop();
                    push(a*b); 

                }
                else  if (post[i]==47){
					            int b = pop();
								int a = pop();
                    push(a/b);  

                }
                else  if (post[i]==43){
					int b = pop();
								int a = pop();
                    push(a+b);  

                }
                else  if (post[i]==44){
					int b = pop();
								int a = pop();
                    push(a-b);  

                }
        }
           
    }
    printf("%d\n",arr[0]);

}
  
