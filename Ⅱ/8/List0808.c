#include <stdio.h>

int add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int main(void)
{
	int year = 2018;
	add(year, 4);
	add(year, 50);

	return 0;
}
//戻り値
