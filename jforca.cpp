#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<ctype.h>
//#define getch() _getch()
//Define gotoxy() para compiladores ANSI C 
void gotoxy(short x, short y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void forca()
{
	gotoxy(50, 3);
	printf("=============|=");
	gotoxy(50, 4);
	printf("=============|=");
	gotoxy(50, 5);
	printf("||           |");
	gotoxy(50, 6);
	printf("||");
	gotoxy(50, 7);
	printf("||");
	gotoxy(50, 8);
	printf("||");
	gotoxy(50, 9);
	printf("||");
	gotoxy(50, 10);
	printf("||");
	gotoxy(50, 11);
	printf("||");
	gotoxy(50, 12);
	printf("||");
	gotoxy(50, 13);
	printf("||");
	gotoxy(50, 14);
	printf("||");
	gotoxy(50, 15);
	printf("||");
	gotoxy(50, 16);
	printf("||");
	gotoxy(50, 17);
	printf("||");
	gotoxy(50, 18);
	printf("|===");
}
void cabeca()
{
	gotoxy(60, 6);
	printf("*********");
	gotoxy(61, 7);
	printf("* 0  *");
	gotoxy(61, 8);
	printf("*   0 *");
	gotoxy(61, 9);
	printf(" *****");
}
void corpo()
{
	gotoxy(63, 10);
	printf("||");
	gotoxy(63, 11);
	printf("||");
	gotoxy(63, 12);
	printf("||");
	gotoxy(63, 13);
	printf("||");
	gotoxy(63, 14);
	printf("||");


	gotoxy(63, 15);
	printf("*");
}
void braco1()
{
	gotoxy(62, 11);
	printf("/");
	gotoxy(61, 11);
	printf("_");
}
void braco2()
{
	gotoxy(65, 10);
	printf("\\");
	gotoxy(66, 11);
	printf("\\");
}
void perna1()
{
	gotoxy(62, 13);
	printf("/");
	gotoxy(61, 14);
	printf("|");
	gotoxy(61, 15);
	printf("|");
}
void perna2()
{
	gotoxy(65, 14);
	printf("\\_");
	gotoxy(66, 15);
	printf("|");
}
int main()
{
	char ca;
	forca();
	gotoxy(25, 1);
	printf("JOGO DA FORCA");

	//2
	char palavras[10][50] = { "LARANJA","MACA","PERA","AMONA","PESSEGO","BANANA","UVA" };
	char palavra[50], letra;
	int i, nupa, totca, nutent = 6, flag, nulecertas = 0;
	srand(time(0));
	nupa = rand() % 7;
	gotoxy(1, 22);
	printf("Ps-%s", palavras[nupa]);
	strcpy_s(palavra, palavras[nupa]);
	gotoxy(1, 23);
	printf("P-%s", palavra);
	totca = strlen(palavras[nupa]);
	printf(" --> %d", totca);
	for (i = 0; i < totca; i++)
	{
		gotoxy(13 + i * 2, 13);
		printf("_");
	}

	do
	{

		gotoxy(1, 15);
		printf("Tentativas: ");
		gotoxy(13, 15);
		printf("%d", nutent);
		gotoxy(1, 17);
		printf("Letra: ");
		letra = _getch();
		flag = 0;
		//for(i=0;palavras[nupa][i]!='\0';i++)
		for (i = 0; i < totca; i++)
		{
			if (toupper(letra) == palavras[nupa][i])
			{
				if (toupper(letra) == palavra[i])
				{
					palavra[i] = ' ';
					gotoxy(13 + i * 2, 13);
					printf("%c", toupper(letra));
					flag = 1;
					nulecertas++;
				}
				if (palavra[i] == ' ')
				{
					flag = 1;
				}
			}
		}
		if (flag == 0)
		{

			switch (nutent)
			{
			case 6:
				cabeca();
				break;
			case 5:
				corpo();
				break;
			case 4:
				braco1();
				break;
			case 3:
				braco2();
				break;
			case 2:
				perna1();
				break;
			case 1:
				perna2();
				break;
			}
			nutent--;
		}
	} while (nutent >= 0 && nulecertas < totca);
	
	if (==i)
		printf("Ganhou\n");
	else
	{
		printf("Perdeu\n");
	}

	{
		{
	printf("\Tentar outra vez? (S/N)? ");
	opcao = _getche();
} while (toupper(opcao) == 'S');
fclose(fich);
system("pause");
}
	gotoxy(1, 22);
	system("pause");
}
char alfa[] = "A ,B ,C ,D ,E ,F ,G ,H ,I ,J ,K ,L ,M, N ,O ,P ,Q ,R ,S ,T ,U ,V ,W ,X ,Y ,Z";
{
	gotoxy(1, 23);
	printf("%0", alfa);

	letra = getch()
		for (int l = 0; l <= strlen(alfa); l++)
			if (ton / per(letra) == toupper(alfa[l]))
				alfa[l] = '_';

}