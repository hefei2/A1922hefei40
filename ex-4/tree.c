#include "tree.h"

void CreatBiTree (BiTree *T) /* BiTree *T等价于 struct node **T    */
{
	char ch;

	scanf("%c", &ch);
	if (ch == '#')    /* 当遇到#时，令树的结点为NULL，从而结束该分支的递归 */
	{
		*T = NULL;
	}
	else
	{
		*T = (BiTree)malloc(sizeof(BiTNode));
		if (*T == NULL)
		{
			printf("内存分配失败");
			exit(0);
		}
		(*T)->data = ch;        /* 生成结点 */
		CreatBiTree(&(*T)->lchild);    /* 构造左子树 */
		CreatBiTree(&(*T)->rchild);    /* 构造右子树 */
		/* 这里需要注意的是->的优先级比&高，所以&(*T)->lchild得到的是lchild的地址 */
	}

}

void PreOrder1(BiTree t, int level)
{
	if (t == NULL)
	{
		return ;
	}
	printf("data = %c level = %d\n ", t->data, level);
	PreOrder1(t->lchild, level + 1);
	PreOrder1(t->rchild, level + 1);
}
/* 以递归方式 中序遍历二叉树 */
void PreOrder2(BiTree t, int level)
{
	if (t == NULL)
	{
		return ;
	}
	PreOrder2(t->lchild, level + 1);
	printf("data = %c level = %d\n ", t->data, level);
	PreOrder2(t->rchild, level + 1);
}

/* 以递归方式 后序遍历二叉树 */
void PreOrder3(BiTree t, int level)
{
	if (t == NULL)
	{
		return ;
	}
	PreOrder3(t->lchild, level + 1);
	PreOrder3(t->rchild, level + 1);
	printf("data = %c level = %d\n ", t->data, level);
}
