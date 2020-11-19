#ifndef list_h
#define list_h

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
} Node;

typedef struct list_{
	Node *head;
	Node *tail;
} List;

void addTail(List *, DataType);
void initList(List *);
int sizeList(List *);
void insertList(List *, int, DataType);
void delList(List *, int);
void isEmpty(List *);
DataType getdata(List *, int);
Node* find(List *,DataType);
void printList(List *);
void clearList(List *);

#endif
	
