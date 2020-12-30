#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
}

int isEmpty(List *list){
	if(list->size == 0){
		return 0;
	}
	return list->size;
}

int isFull(List *list){
	if(list->size == MAX){
		return MAX;
	}

	return list->size;
}
void push(List *list,DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	
	node->next = NULL;
	node->data = data; 
	if(list->head == NULL){
		list->head = node;
	}else{
		list->tail->next = node;
	}
	list->tail = node;
	list->size++;

	return;
}

DataType pop(List *list){
	Node *node = (Node *)malloc(sizeof(Node));

	node = list->head;
	list->head = list->head->next;
	list->size--;

	return node->data;
}

DataType gethead(List *list){
	return list->head->data;
}

DataType gettail(List *list){
	return list->tail->data;
}

int getlength(List *list){
	return list->size;
}
