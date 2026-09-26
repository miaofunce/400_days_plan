#include <stdio.h>

void swap(int *a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x = 10,y=20;
	printf("交换前x = %d,y=%d\n",x,y);
	
	swap(&x,&y);
	
	printf("交换后x = %d,y=%d",x,y);
	return 0;
}
