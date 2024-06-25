#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//int main() {
//	#define MAX 100
//	printf("max = % d\n", MAX);
//	//枚举常量演示
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//注：枚举常量的默认是从0开始，依次向下递增1的
//
//	printf("加入比特\n");
//
//	scanf("%d", &line);
//	
//	while (line <= 2000) {
//		line++;
//		printf("我要努力敲代码");
//	}
//	if (line > 2000) {
//		printf("牛逼");
//	}
//
//}

//函数
//int main() {
//	int num1, num2, sum;
//	printf("输入两个操作数\n");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("和为%d", sum);
//
//}

int add(int x,int y ) {
	int z = x + y;
	return z;
}
int main() {
	int num1, num2, sum;
	printf("输入两个操作数\n");
	scanf("%d %d", &num1, &num2);

	sum = add(num1, num2);
	printf("和为%d", sum);

}