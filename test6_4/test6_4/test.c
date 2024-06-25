#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu() {
	printf("*******************************************\n");
	printf("******************1.��ʼ��Ϸ***************\n");
	printf("******************0.�˳���Ϸ***************\n");
	printf("*******************************************\n");
}

void game() {
	char board[ROW][COL] = { 0 };
	char ret = '0';
	//��ʼ������
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);

	//����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		
		//�ж���Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		DisplayBoard(board, ROW, COL);

	}
	if (ret == '*') {
		printf("��Ӯ��\n");
	}
	else if(ret == '#')
	{
		printf("����Ӯ\n");
	}
	else {
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);

}
int main() {
	
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;

}