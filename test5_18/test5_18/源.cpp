#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}

//���ξֲ�����
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//�ֲ�����
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//ȫ�ֱ���
//extern int g_val;
//int main() {
//	printf("%d",g_val);
//	return 0;
//}

////�������
//#define num 100
////�����
//#define ADD(x,y) ((x)+(y))
//int main() {
//	printf("%d\n", num);
//	printf(" c=%d\n", ADD(3, 4));
//}

//ȡ������ַ
//int main() {
//	int a = 10;
//	printf("%d\n", &a);
//}

//ָ��
//int main() {
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", a);
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(p));//int*
//	printf("%zu\n", sizeof(*p));//int����
//	return 0;
//}

//�ṹ��
struct stu {
	char name[5];
	int age;
	char sex[10];
	char id[11];
};

void print(struct stu* s) {

	printf("%s %d %s %s\n", (*s).name, (*s).age, (*s).sex, (*s).id);
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", s->name, s->age, s->sex, s->id);
}
int main() {
	struct stu s = { "wang",10,"��","123" };
	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
	print(&s);

	return 0;
}