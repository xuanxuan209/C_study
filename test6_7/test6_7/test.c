#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	num1& num2;
//	num1 | num2;
//	num1^ num2;
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}