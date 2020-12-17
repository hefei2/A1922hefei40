#include "tree.h"


int main(int argc,char **argv)
{
	int level  = 1;

	BiTree t = NULL;
	printf("以前序遍历方式输入二叉树\n");
	CreatBiTree(&t);    /* 传入指针的地址 */
	printf("先序遍历\n");
	PreOrder1(t ,level);
	printf("中序遍历\n");
	PreOrder2(t,level);
	printf("后续遍历\n");
	PreOrder3(t,level);

}
