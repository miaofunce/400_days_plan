#define Maxsize 5
#include <stdio.h>
struct Queue{
	int data[Maxsize];
	int front;
	int rear;
};

void initQueue(struct Queue *q){
	q->front = 0;
	q->rear = 0;
}

int EnQueue(struct Queue *q,int val){
	if(q->rear == Maxsize) return 0;
	q->data[q->rear] = val;
	q->rear++;
	return 1;
}

int DeQueue(struct Queue *q,int *val){
	if(q->rear == q->front) return 0;
	*val = q->data[q->front++];
	return 1;
}

int main(){
	struct Queue q;
	int val;
	
	initQueue(&q);
	printf("front=%d rear=%d\n",q.front,q.rear);
	printf("10 %d\n",EnQueue(&q,10));
	printf("20 %d\n",EnQueue(&q,20));
	printf("30 %d\n",EnQueue(&q,30));
	printf("40 %d\n",EnQueue(&q,40));
	printf("50 %d\n",EnQueue(&q,50));
	
	printf("10->%d\n",DeQueue(&q,&val));
	printf("front=%d rear=%d\n",q.front,q.rear);
	printf("20->%d\n",DeQueue(&q,&val));
	printf("front=%d rear=%d\n",q.front,q.rear);
	printf("50 %d\n",EnQueue(&q,50));
	printf("front=%d rear=%d\n",q.front,q.rear);
}
