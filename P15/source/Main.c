#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *f1, *f2;
	char c;
	f1 = fopen("welcome.txt", "r");
	f2 = fopen("output.txt", "w");

	if ((f1 != NULL) && (f2 != NULL))
	{
		while ((c = fgetc(f1)) != EOF)
			putc(c, f2);
		fclose(f1);
		fclose(f2);
		printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
}