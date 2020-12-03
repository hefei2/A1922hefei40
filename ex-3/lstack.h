#ifndef lstack_h
#define lstack_h

#include <stdio.h>
#include <stdbool.h>

#define MAX 50

typedef int DataType;

typedef struct list_{
	int top;
	DataType data[MAX];
	int size;
} List;

void printlstack(List *);
void initList(List *);
bool isEmply(List);
bool isFull(List);
void push(List *, DataType);
DataType pop(List *);
DataType gettop(List);


#endif
