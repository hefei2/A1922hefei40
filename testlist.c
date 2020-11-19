#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initList(list);

	insertList(list,1,1);
	insertList(list,1,3);
	insertList(list,2,2);
	insertList(list,4,0);
	
	printList(list);
	printf("第%d个元素是:%d\n",2,getdata(list,2));

	delList(list,2);
	printList(list);

	return 0;

}
