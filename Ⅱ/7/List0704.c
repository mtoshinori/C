#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));	//乱数生成の準備
	enum { FIRE, WATER, WIND, EARTH };
	int gems[10];

	for (int i = 0; i < 10;i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
	}

	return 0;
}
