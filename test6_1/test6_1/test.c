#define _CRT_SECURE_NO_WARNINGS
//дһ�����������ж�һ�����ǲ���������

//int is_sushu(int x) {
//
//}
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}