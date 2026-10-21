#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10

struct Stack{
	int data[MaxSize];
	int top;
};


void initStack(struct Stack *s){
	s->top = -1;
};

int Push(struct Stack *s,int val){
	if(s->top == MaxSize-1){
		printf("栈满\n");
		return 0;
	};
	s->top++;
	s->data[s->top] = val;
	
	return 1;
} ;

int Pop(struct Stack *s,int *val){
	if(s->top == -1){
		printf("栈空");
		return 0;
	};
	*val = s->data[s->top];
	s->top--;
	return 1;
};

int main(){
	struct Stack s;
	initStack(&s);
	Push(&s,10);
	Push(&s,20);
	Push(&s,30);
	
	
	printf("-------开始出栈操作-------\n");
	int val;
	while(Pop(&s,&val)==1){
		printf("%d\n",val);
	};
	return 0;
	
}
