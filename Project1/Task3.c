#include <stdio.h>
#include <locale.h>
void main()
{
	char *r = "a";
	char *t = "b";
	int fn, sn;
	setlocale(LC_ALL, "RUS");
	scanf_s("%d%d", &fn, &sn);
	printf("________________________________________________________\n");
	printf("|  %*s * %*s  |  %*s + %*s  |  %*s - %*s  |\n", 5, r, 5, t, 5, r, 5, t, 5, r, 5, t);
	printf("--------------------------------------------------------\n");
	printf("| %*d * %*d | %*d + %*d | %*d - %*d |\n", 6, fn, 6, sn, 6, fn, 6, sn, 6, fn, 6, sn);
	printf("--------------------------------------------------------\n");
	printf("| %*d      | %*d      | %*d      |\n", 10, fn * sn, 10, fn + sn, 10, fn - sn);
}