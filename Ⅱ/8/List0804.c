#include <stdio.h>

void funcA(void);
void funcB(void);

int main(void)
{
	funcA();
	return 0;
}

void funcA(void)
{
	printf("関数Aです\n");
	funcB();
}

void funcB(void)
{
	printf("関数Bです\n");
}

//プロトタイプ宣言
