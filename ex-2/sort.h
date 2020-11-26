#ifndef sort_h
#define sort_h
#include <stdio.h>
#define MAX 50

typedef int TypeData;

typedef struct sq_{
	TypeData data[MAX];
	int size;
} SQ;

//void comesort(SQ *);
void printsort(SQ *);
void initsort(SQ *);
void creatsort(SQ *);
void bubblesort(SQ *);
void insertsort(SQ *);
void selectsort(SQ *);
int Partition(SQ *, int, int);
void QSort(SQ *, int, int);
void QuickSort(SQ*);

#endif
