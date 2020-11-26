#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	Node *node = (Node *)malloc(sizeof(Node));
	Node *prev = (Node *)malloc(sizeof(Node));
	
	int n , m;
	printf("input the people:");
	scanf("%d",&n);
	printf("input the m :");
	scanf("%d",&m);

	for(int i = 1;i<=n;i++){
		insertList(list,i,i);
	}
	
	prev = list->head;
	node = prev->next;
	list->tail->next = list->head;

	int k = 1;
	while(prev != prev->next){
		k++;
		if(k == m){
			prev->next = node->next;
			node = prev->next;
			k = 0;

		}else{
			node = node->next;
			prev = prev->next;
		
		}
	}
	

	printf("最后一个获胜者的编号是： %d\n",prev->data);

	return 0;
}


