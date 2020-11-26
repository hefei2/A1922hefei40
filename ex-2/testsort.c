#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	SQ *sq = (SQ *)malloc(sizeof(SQ));
	initsort(sq);
	printf("please input the size :");
	scanf("%d",&sq->size);

	creatsort(sq);
	printf("冒泡排序:\n");
	printsort(sq);
	bubblesort(sq);

	creatsort(sq);
	printf("插入排序:\n");
	printsort(sq);
	insertsort(sq);

	creatsort(sq);
	printf("选择排序:\n");
	printsort(sq);
	selectsort(sq);

	creatsort(sq);
	printf("快速排序:\n");
	printsort(sq);
	QuickSort(sq);

	return 0;
}


