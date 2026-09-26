#include <stdio.h>

//定义结构体
struct student{
	char name[20];
	int score;
};

int main(){
	struct student class1[3] = {
		{"张三",78},
		{"李四",97},
		{"王五",88}
	};
	
	int sum = 0;
	printf("===学生成绩表===\n");
	
	for(int i = 0;i < 3;i++){
		printf("%s 的成绩是: %d\n",class1[i].name,class1[i].score);
		sum += class1[i].score;
	}
	printf("平均分: %.2f\n",sum / 3.0);
	
	struct student *p = &class1[0];
	
	printf("\n=== 指针访问测试 ===\n");
	printf("第一个学生:%s, %d\n", p->name,p->score);
	
	return 0;
}




