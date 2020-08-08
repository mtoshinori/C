#include <stdio.h>

int main(void)
{
	typedef int IntX10[10];
	IntX10 gems;

	gems[1] = 3;
	printf("%d\n",gems[1]);
	return 0;
}
//配列に別名を与える
