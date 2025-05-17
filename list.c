#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int val;
	struct Node* next;
 }Node;

Node* createNode(int value){
	Node* p = malloc(sizeof(Node));
	if(p == NULL){
		perror("wrong malloc");
		return p;
	}
	p->val = value;
	p->next = NULL;
	return p;
}

void insertAtEnd(Node** head, int value){

if(*head == NULL){
	*head = createNode(value);
}
else{
	Node* p = *head;
	while(p != NULL){
		p = p->next;
	}
	p = (Node*)malloc(sizeof(Node));
	p->val = value;
}
}

void insertAtFront(Node** head, int value){
	Node* temp = createNode(value);
	temp->next = *head;
	*head = temp;
}

void insertAt(Node** head, int index, int value){
	if(index == 0) insertAtFront(head, value);
	else{
		Node* p = (*head)->next;
		for(int i = 0; i <= index; i++){
			p = p->next;
		}
	}
}



