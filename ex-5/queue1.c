#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *left, *right;
} Deque;


Deque* createDeque() {
	Deque *head;
	head = (Deque*)malloc(sizeof(Deque));
	head->left = head->right = head;
	return head;
}


int size(Deque *dq) {
	struct node *p = dq->right;
	int k = 0;
	while (p != dq){
		k++;
		p = p->right;
	}
	return k;
}
int empty(Deque *dq) {
	return dq->right == dq;
}


dataType front(Deque *dq) {
	if (empty(dq)) exit(1);
	return dq->right->data;
}


dataType back(Deque *dq) {
	if (empty(dq))  exit(1);
	return dq->left->data;
}


void push_front(Deque *dq, dataType x) {
	struct node *s = (struct node*)malloc(sizeof(struct node));
	s->data = x;
	s->left = dq;
	s->right = dq->right;
	dq->right->left = s;
	dq->right = s;
}

void push_back(Deque *dq, dataType x) {
	struct node *s = (struct node*)malloc(sizeof(struct node));
	s->data = x;
	s->left = dq->left;
	s->right = dq;
	dq->left->right = s;
	dq->left = s;
}

void pop_front(Deque *dq) {
	if (empty(dq))  exit(1);
	struct node *p = dq->right;
	p->right->left = dq;
	dq->right = p->right;
	free(p);
}


void pop_back(Deque *dq) {
	if (empty(dq)) exit(1);
	struct node *p = dq->left;
	p->left->right = dq;
	dq->left = p->left;
	free(p);
}


void crear(Deque *dq) {
	struct node *p, *q;
	p = dq->right;
	while (p != dq) {
		q = p;
		p = p->right;
		free(dq);
	}
	dq->left = dq->right = dq;
}


void print(Deque *dq) {
	struct node *p = dq->right;
	while (p != dq) {
		printf("%d ", p->data);
		p = p->right;
	}
	printf("\n");
}

int main(int argc ,char **argv) {
	Deque *dq = createDeque();
	push_back(dq, 80);
	push_front(dq, 90);
	push_back(dq, 70);
	push_front(dq, 60);
	pop_back(dq);
	print(dq);
}
