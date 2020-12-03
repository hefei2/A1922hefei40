#include "lstack.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initList(list);

	for(int i = 1; i<6;i++){
		push(list, i);
	}
	printlstack(list);
	printf("the top is : %d\n",gettop(*list));
	printf("the new top is : %d\n",pop(list));

	return 0;

}
