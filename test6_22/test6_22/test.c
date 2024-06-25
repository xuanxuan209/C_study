#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d\n", parr[i][j]);
//		}
//	}
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d", arr[i]);
//	}
//}


int main() {
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

}