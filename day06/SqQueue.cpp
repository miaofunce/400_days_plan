#include <stdio.h>
#define Maxsize 5


struct SqQueue{
	int data[Maxsize];
	int front;
	int rear;
};

void  initQueue(struct SqQueue *q){
	q->front = 0;
	q->rear = 0;
}



int  isEmpty(struct SqQueue *q){
	return q->front == q->rear;
}

int  isFull(struct SqQueue *q){
	return (q->rear+1) % Maxsize == q->front;
}

int EnQueue(struct SqQueue *q,int val){
	if(isFull(q)){
		return 0;
	}
	q->data[q->rear] = val;
	q->rear = (q->rear + 1) % Maxsize;
	return 1;
}

int  DeQueue(struct SqQueue *q, int *val){
	if(isEmpty(q)){
		return 0;
	}
	*val = q->data[q->front];
	q->front = (q->front + 1) % Maxsize;
	return 1;
}

int  Length(struct SqQueue *q){
	return (q->rear - q->front + Maxsize) % Maxsize;
}
