#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node* next;
}node;

node* create(int val,node* next){
	node* new_node = (node*)malloc(sizeof(node));
	new_node -> val = val;
	new_node -> next = next;
	return new_node;
}

node* push (node* head,int data){
	node* new_node = create(data,head);
	head=new_node;
	return head;
}


node* pop (node* head){
	node* temp = head;
	head = head -> next;
	return head;
}


node* enqueue(node* head,int data){

		if (head == NULL){
		node* new_node = create(data,NULL);
		head = new_node;
		return head;
	}
	node* new_node = create(data,NULL);
	node* cursor = head;
	while (cursor -> next != NULL){
		cursor = cursor ->next;
	}
	cursor -> next = new_node;
	return head;
}


node* dequeue(node* head){
	node* temp = head;
	head = head -> next;
	return head;
	
}

void main(){
		node* head = NULL;
		head = enqueue(head,5);
		head = enqueue(head,6);
		head = enqueue(head,99);	
		printf("%d ", head->val);
		head = dequeue(head);
		printf("%d ", head->val);
		head = dequeue(head);
		printf("%d ", head->val);
}