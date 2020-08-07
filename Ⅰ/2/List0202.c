#include <stdio.h>
//オーバーフロー
int main(void)
{
	char c = 100;
	char d = c + 100;
	printf("%d\n",d);
	return 0;
}
