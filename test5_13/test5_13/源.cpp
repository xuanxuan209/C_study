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
//	//ö�ٳ�����ʾ
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
//
//	printf("�������\n");
//
//	scanf("%d", &line);
//	
//	while (line <= 2000) {
//		line++;
//		printf("��ҪŬ���ô���");
//	}
//	if (line > 2000) {
//		printf("ţ��");
//	}
//
//}

//����
//int main() {
//	int num1, num2, sum;
//	printf("��������������\n");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("��Ϊ%d", sum);
//
//}

int add(int x,int y ) {
	int z = x + y;
	return z;
}
int main() {
	int num1, num2, sum;
	printf("��������������\n");
	scanf("%d %d", &num1, &num2);

	sum = add(num1, num2);
	printf("��Ϊ%d", sum);

}