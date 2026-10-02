#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

int insertNode(struct Node *head, int pos,int val){
	if(pos<2) {
		printf("位置不合法");
		return 0;
	}
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	if(newNode == NULL) return 0;
	newNode ->data = val;
	newNode ->next = NULL;
	
	struct Node *p = head;
	int i = 1;
	
	while(p !=NULL && i < pos-1){
		p = p->next;
		i++;
	}
	
	if(p == NULL){
		printf("超出链表范围");
		free(newNode);
		return 0;
	}
	
	newNode ->next = p ->next;
	p ->next = newNode;
	return 1;
	
	
	
}

int main(){
	struct Node *head = (struct Node *)malloc(sizeof (struct Node));
	struct Node *second = (struct Node *)malloc(sizeof (struct Node));
	struct Node *third = (struct Node *)malloc(sizeof(struct Node));
	
	
	head ->data = 10;
	second ->data = 20;
	
	third ->data =30;
	
	head->next = second;
	second ->next =third;
	third ->next = NULL;
	
	struct Node *p = head;
	

	
	printf("链表的内容是:\n");
	
	while(p != NULL){
		printf("%d ->",p->data);
		p = p->next;
	}
		printf("NULL\n");
	
	
	printf("---开始插入操作---\n");
	int result = insertNode(head,2,15);
	
	if(result == 1){
		printf("插入成功!新链表为:\n");
		struct Node *q = head;
		while(q != NULL){
			printf("%d ->",q->data);
			q = q->next;
		}
		printf("null\n");
	}else{
		printf("插入失败\n");
	}
	free(head);
	free(second);
	free(third);
	
	return 0;
}


