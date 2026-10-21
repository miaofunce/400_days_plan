#include <stdio.h>     /* main 里要 printf */
#include <stdlib.h>    /* push/pop 里要 malloc / free */
struct StackNode{
	int data;
	struct StackNode *next;
};


int push(struct StackNode **top, int val){
	struct StackNode *newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
	if(newNode == NULL) return 0;
	newNode->data = val;
	newNode->next = *top;
	*top = newNode;
	return 1;
}
int pop(struct StackNode **top, int *val){
	if(*top ==NULL) return 0;
	struct StackNode *p = *top;
	*val = p->data;
	*top = p->next;
	free(p);
	return 1;
}


int main(){
	struct StackNode *top = NULL;      
	
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);
	
	printf("开始出栈:\n");
	int val;
	while(pop(&top, &val) == 1){
		printf("%d\n", val);
	}
	
	printf("再 pop 一次(应该返回 0):%d\n", pop(&top, &val));  
	
	return 0;
}
