#include <stdio.h>

//指针版交换函数
void swap(int *a, int *b){
	int temp = *a;//a指向的值存入temp
	*a = *b;      //把b指向的值赋给a指向的地址
	*b = temp;    //把temp的值赋给b所指向的地址
}

int main(){
	int x = 10, y = 20;
	printf("交换前: x = %d, y = %d\n", x, y);
	
	swap(&x, &y);
	
	printf("交换后:x = %d, y = %d\n",x,y);
	getchar();
	return 0;
}
