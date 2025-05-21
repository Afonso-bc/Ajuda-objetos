#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//Define gotoxy() para compiladores ANSI C 
void gotoxy(short x, short y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void desenho()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		gotoxy(i, 3);
		printf("%c", 220);

		gotoxy(i, 6);
		printf("%c", 220);
	}
	//colunas
	for (i = 1; i <= 8; i++)
	{
		gotoxy(3, i);
		printf("%c", 220);

		gotoxy(6, i);
		printf("%c", 220);
	}
	}

int main()
{
	desenho();
	system("pause");
}