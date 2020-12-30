#ifndef queue_h
#define queue_h

#include <stdio.h>
#define MAX 100

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
} Node;

typedef struct list_{
	Node *head;
	Node *tail;
	int size;
} List;

void initList(List *);
int isEmpty(List *);
int isFull(List *);
void push(List *, DataType);
DataType pop(List *);
DataType gethead(List *);
DataType gettail(List *);
int getlength(List *);


#endif
