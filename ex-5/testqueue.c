#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));

	initList(list);
	push(list,1);
	push(list,2);
	push(list,3);
	printf("%d\n",gethead(list));
	printf("%d\n",gettail(list));
	printf("size : %d\n",getlength(list));

	return 0;
}


