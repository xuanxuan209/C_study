#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//交换数据
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
	printf("交换前x=%d,y=%d", x, y);
	Swap(&x, &y);
	printf("交换前x=%d,y=%d", x, y);
	return 0;

}