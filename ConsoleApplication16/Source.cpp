#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
FILE * pt;
int i, j;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	if ((pt=fopen("Tex.txt","w"))==NULL)
	{
		printf("������ ��� �������� �����\n");
		exit(1);
	}
	else
	{
		/*fputs("500", pt);
		fclose(pt);*/
		char n[40];
		char GN[60] = "������";
		for ( i = 0; i < strlen(GN); i++)
		{
			fputc(GN[i], pt);
		}
		printf("���� ������� �������\n");
	}

	fclose(pt);
	char sl[60];
	printf("������� �����");
	scanf("%s", sl);
	if ((pt = fopen("Stroka.txt", "a+")) == NULL)
	{
		printf("������ ��� �������� �����\n");
		exit(1);
	}
	else
	{
		for ( i = 0; i < 5; i++)
		{
			for ( j = 0; j < strlen(sl); j++)
			{
				//printf("%c\n", sl[j]);
				fputc(sl[j], pt);
				
			}
			
		}
	}
	fclose(pt);
}