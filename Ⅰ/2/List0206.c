#include <stdio.h>

int main(void)
{
	const int TAX = 108;
	int fax = 50000;
	printf("50,000円から40,000円に値下げします\n");
	TAX = 40000;	//コンパイルエラー
	printf("FAXの新価額(税込) : %d円\n", fax * TAX / 100);
	return 0;
}
