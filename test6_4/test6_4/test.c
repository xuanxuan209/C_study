#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu() {
	printf("*******************************************\n");
	printf("******************1.开始游戏***************\n");
	printf("******************0.退出游戏***************\n");
	printf("*******************************************\n");
}

void game() {
	char board[ROW][COL] = { 0 };
	char ret = '0';
	//初始化棋盘
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);

	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		
		//判断输赢
		ret=IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		DisplayBoard(board, ROW, COL);

	}
	if (ret == '*') {
		printf("你赢了\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);

}
int main() {
	
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请选择");
		scanf("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;

}