#include <stdio.h>

int main(void)
{
	int a = 70;
	printf("変数aには70が入っています\n");

	long addrA = (long)&a;	//キャスト
	printf("変数aのアドレス: %ld\n", addrA);
	return 0;
}
