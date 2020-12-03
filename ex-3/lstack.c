#include "lstack.h"
#include <stdio.h>
#include <stdlib.h>

void initList(List *list){
	list->size = 0;
	list->top = -1;

	return;
}

bool isEmpty(List list){
	return (list.top == -1);
}

bool isFull(List list){
	return (list.size == MAX);
}

void push(List *list, DataType data){
	if(isFull(*list)){
		return;
	}

	list->top++;
	list->data[list->top] = data;
	list->size++;

	return;
}

DataType pop(List *list){
	if(isEmpty(*list)){
		return -1;
	}

	DataType temp = list->data[list->top];
	list->top--;
	list->size--;

	return temp;
}

void printlstack(List *list){
	for(int i = 0;i < list->size;i++){
		printf("%d\t",list->data[i]);
	}
	printf("\n");

	return;
}

DataType gettop(List list){
	return list.data[list.top];
}


