#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	if (3 == 5) {
//		printf("heheh \n");
//	}
//	else {
//		printf("aa\n");
//	}
//	return 0;
//}

//int main() {
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("未成年\n");
//	}
//	else {
//		printf("成年人\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//判断一个数是否为奇数
//int main() {
//	int num = 1;
//	printf("请输入数字");
//	scanf("%d", &num);
//	
//	if (num % 2 == 1) {
//		printf("%d奇数",num);
//	}
//	else {
//		printf("%d偶数",num);
//	}
//}

//输出1-100之间的奇数
//int main() {
//	int num = 1;
//	while (num <= 100) {
//		if (num % 2 == 1) {
//			printf("%d ", num);
//			
//		}
//		num++;
//	}
//	return 0;
//}

//switch语句
//int main() {
//	int day = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	default:
//		printf("错误");
//		break;
//	}
//	return 0;
//}

//练习
//int main() {
//    char operator;
//    double n1, n2;
//
//    printf("输入一个运算符 (+, -, *, /): ");
//    scanf("%c", &operator);
//    printf("输入两个操作数: ");
//    scanf("%lf %lf", &n1, &n2);
//
//    switch (operator)
//    {
//    case '+':
//        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
//        break;
//
//    case '-':
//        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
//        break;
//
//    case '*':
//        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
//        break;
//
//    case '/':
//        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
//        break;
//
//        // 没有匹配到任何运算符（ +, -, *, /)
//    default:
//        printf("错误！ 运算符不正确");
//    }
//
//    return 0;
//}

//在屏幕上打印1-10的数字
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		printf("%d",i);
//		i++;
//	}
//	return 0;
//
//}

//break 代码实例
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//continue 代码实例1
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	return  0;
//}

//int main() {
//	char ch = '0';
//	while ((ch = getchar()) != EOF) {
//		if (ch > '0' || ch < '9')
//			putchar(ch);
//	}
//	return 0;
//}

//输出0-10的数
//int main() {
//	int i = 0;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//
//int main() {
//	for (int i = 0; i <= 10; i++) {
//		printf("%d ", i);
//	}
//}

//for循环中的break和continue
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//do  while语句
//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

//do while循环中的break和continue
#include <stdio.h>
//int main()
//{
//	int i = 10;
//
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} while (i < 10);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 10;
//
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i < 10);
//
//	return 0;
//}


 //N的阶乘
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//#include	<string.h>
//#include <stdlib.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//while循环实现
//	while (left <= right)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);
//		//清空屏幕
//		system("cls");
//		printf("%s\n", arr2);
//	}
	////for循环实现
	//for (left = 0, right = strlen() - 1;
	//	left <= right;
	//	left++, right--)
	//{
	//	Sleep(1000);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", target);
	//}
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
//
//int main() {
//	//默认密码为abcde
//	
//	char pas[10] = { 0 };
//	int i = 0;
//	
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码");
//		scanf("%s", pas);
//		if (strcmp(pas, "abcde") == 0) {
//			break;
//		}
//		else {
//			printf("密码错误");
//		}
//	}
//	if (i == 3) {
//		printf("输错三次，退出");
//	}
//	return 0;
//}

//猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
////RAND_MAX--rand函数能返回随机数的最大值。
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


