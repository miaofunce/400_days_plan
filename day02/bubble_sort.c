#include <stdio.h>

//冒泡排序函数
void bubble_sort(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;  
			}
		}	
	}
}

int main(){
	int arr[10];
	printf("请输入10个整数:\n");
	for(int i = 0; i < 10; i++){
		scanf("%d",&arr[i]);
	}
	
	bubble_sort(arr,10);
	
	printf("排序后:\n");
	for(int i=0;i<10;i++){
		printf("%3d ",arr[i]);
	}
	
	return 0;
	
}
