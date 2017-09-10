#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	int key;
	char name[22] ;
	struct node *next;
};

typedef struct node Node;

Node* add_node(Node*, int , char*);
Node* create_node(int , char*);


int main() {

	Node *head = NULL;
	int data;
	char name[22];
	int num;
	int sum = 0;

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%s", name);
		scanf("%d", &data);
		head = add_node(head, data, name);
		sum += data;
	}


	if (head->key > sum / 2) {
		printf("%s\n", head->name);
	}
	else {
		printf("atcoder\n");
	}
		
	return 0;
}

Node* add_node(Node* head, int data , char* name) {

	Node *ptr, *new_node;
	new_node = create_node(data,name);

	if (head == NULL || data > head->key) {
		new_node->next = head; //(1)
		head = new_node; //(2)

	}
	else {

		ptr = head;
		while (ptr->next != NULL && data < ptr->next->key) {
			ptr = ptr->next;
		}
		new_node->next = ptr->next; //(3)
		ptr->next = new_node; //(4)


	}
	return head;
}

Node* create_node(int data,char* name) {

	Node *new_node;
	new_node = (Node*)calloc(1, sizeof(Node));
	new_node->key = data;
	strcpy(new_node->name, name);
	new_node->next = NULL;
	return new_node;
}

