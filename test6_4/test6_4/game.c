#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
			
		}	
		printf("\n");
		if (i < row - 1) {
			int j = 0;
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
		
	}

}

//�������
void PlayerMove(char board[ROW][COL],int row,int col) {
	int x = 0;
	int y = 0;
	printf("������壺>");

	while (1)
	{
		printf("���������꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//�ж��Ƿ������������
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("����ռ�ã���������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");

		}
	}


}

void ComputerMove(char board[ROW][COL],int row,int col) {
	int x = 0;
	int y = 0;
	printf("�������壺>\n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
	
}
int IsFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col) {
	//��
	int i = 0;
	for ( i = 0; i < row; i++) {
		if (board[i][0]==board[i][1]&& board[i][1] ==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//��
	int j = 0;
	for ( j = 0; j < col; j++) {
		if (board[1][j] == board[1][j]&& board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1]&& board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	//ƽ��
	if (IsFull(board, row, col)) {
		return 'Q';
	}
	//����
	
	return 'C';
	
}