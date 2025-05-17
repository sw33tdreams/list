#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int val;
	struct Node* next;
}Node;

Node* createNode(int);
void insertAtEnd(Node**, int);

int main(){
	Node* p = createNode(5);
	Node** head = &p;
	insertAtEnd(head, 7);
	Node* p2 = p->next;
	printf("%d, %d\n ", p->val, p2->val);
	return 0;
}
