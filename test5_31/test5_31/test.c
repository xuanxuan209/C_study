#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������
void Swap(int* a,int* b) {
	int z = 0;
	z = *a;
	*a = *b;
	*b = z;
}
int main() {
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	printf("����ǰx=%d,y=%d", x, y);
	Swap(&x, &y);
	printf("����ǰx=%d,y=%d", x, y);
	return 0;

}