#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
}

int sizeList(List *list){
	Node *node = list->head;
	int size = 0;
	if(node == NULL){
		return size = 0;
	}

	while(node != NULL){
		size++;
		node = node->next;
	}
	return size;
}

void isEmpty(List *list){
	if(list->head == NULL){
		return;
	}
}

/*void addTail(List *list,DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	if(list->head == NULL){
		list->head = node;
	}else{
		list->tail->next = node;
	}
	list->tail = node;

	return;
}*/

void insertList(List *list ,int loc, DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	Node *prev = (Node *)malloc(sizeof(Node));

	if(loc<=1){
		node->data = data;
		node->next = NULL;
		if(list->head == NULL){
			list->tail = node;
		}else{
			node->next = list->head;
		}
		list->head = node;
		
	//	return;
	}else{
		prev = list->head;
		node->data = data;
		node->next = NULL;
		if(list->head == NULL){
			list->tail = node;
		}

		for(int size=1;size<loc-1;size++){
			prev = prev->next;
		}

		node->next = prev->next;
		prev->next = node;

	//	return;
	}
	
	node = list->head;
	while(node->next != NULL){
		node = node->next;
	}
	list->tail = node;

}

void delList(List *list, int loc){
	if(loc<=1){
		list->head = list->head->next;
		return;
	}else{
		Node *node = list->head;
		for(int size= 1;size<loc-1;size++){
			if(node == NULL){
				return;
			}
			node = node->next;
		}	
		node->next = node->next->next;

		return;
	}
}

DataType getdata(List *list, int loc){
	Node *node = list->head;
	int size = 1;
	if(size != loc){
		node = node->next;
		size++;
	}

	return node->data;

}
Node* find(List *list, DataType data){
	Node *node = list->head->next;
	while(node && node->data != data){
		node = node->next;
		}
	return node;
}

void printList(List *list){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;

	while(node != NULL){
		printf("%d\t",node->data);
		node = node->next;
	}
	printf("\n");

	return;
}

void clearList(List *list){
	if(list->head == NULL){
		return;
	}
	Node *p,*q;
	p = list->head;
	while(p){
		q = p;
		p = p->next;
		free(q);
	}
	list->head = NULL;

	return;

}


	




