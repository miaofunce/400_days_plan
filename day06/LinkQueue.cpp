#include <stdio.h>
#include <stdlib.h>
typedef struct LinkNode{
	int data;
	struct LinkNode *next;
}LinkNode;

typedef struct{
	LinkNode *front;
	LinkNode *rear;
}LinkQueue;

void initQueue(LinkQueue &q){
	q.front = q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	q.front->next = NULL;
}

int EnQueue(LinkQueue &q,int val){
	LinkNode *p = (LinkNode*)malloc(sizeof(LinkNode));
	p->data = val;
	p->next = NULL;
	q.rear->next = p;
	q.rear = p;
	return 1;
}


bool isEmpty(LinkQueue &q){
	if(q.front == q.rear)
		return true;
	else 
		return false;
}

int DeQueue(LinkQueue &q,int &val){
	if(isEmpty(q)) return 0;
	
	LinkNode *p = q.front->next;
	
	val = p->data;
	
	q.front->next = p->next;
	
	if(q.rear == p){
		q.rear = q.front;
	}
	free(p);
	return 1;
}

void DestroyQueue(LinkQueue &q){
	LinkNode *p = q.front;
	while(p != NULL){
		LinkNode *temp = p->next;
		free(p);
		p = temp;
	}
	q.front = q.rear = NULL;
}
