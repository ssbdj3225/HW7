#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *f;
	char s[MAX], c;
	int i = 0;
	f = fopen("output.txt", "a");
	printf("�п�J�r��A��ENTER�䵲����J:\n");
	while ((c = _getche()) != ENTER && i < MAX)
		s[i++] = c;
	putc('\n', f);
	fwrite(s, sizeof(char), i, f);
	fclose(f);
	printf("\n�ɮת��[����!!\n");
	system("pause");
}