#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	/*Displayboard(mine, ROW, COL);*/
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	/*Displayboard(mine, ROW, COL);*/
	//ɨ��


}
void menu()
{
	printf("**********************\n");
	printf("*****   1.play    ****\n");
	printf("*****   0.exit    ****\n");
	printf("**********************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			return 0;
		}
		default:
		{
			printf("ѡ�����������ѡ��\n");
		}
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}