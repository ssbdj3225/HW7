#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("wel.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = fgetc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d���r��\n", count);
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}