#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *in, *out;
	int c;
	char s[100];
	in = fopen("welcome.txt", "r");
	out = fopen("output.txt", "w");
	while (!feof(in))
	{
		c = fscanf(in, "%s", s);
		if (c > 0)
			fprintf(out, "%s\n", s);
	}
	fclose(in);
	fclose(out);
	system("pause");
}