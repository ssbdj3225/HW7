#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 80

int main(void)
{
	FILE *f;
	char s[MAX];
	int b;
	f = fopen("output.txt", "r");
	while (!feof(f))
	{
		b = fread(s, sizeof(char), MAX - 1, f);
		s[b] = '\0';
		printf("%s\n", s);
	}
	fclose(f);
	system("pause");
}
