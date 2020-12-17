#ifndef tree_h
#define tree_h
#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef struct node
{
		char data;
			struct node *lchild;    /* 左子树 */
				struct node *rchild;    /* 右子树 */

}BiTNode, *BiTree;

void CreatBiTree(BiTree *T);
void PreOrder1(BiTree ,int);
void PreOrder2(BiTree,int);
void PreOrder3(BiTree, int);

#endif

