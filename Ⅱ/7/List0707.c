#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));	//乱数生成の準備
	enum { FIRE, WATER, WIND, EARTH };
	const char GEM_CHARS[] = {'$', '*', '@', '#'};
	int gems[10];

	for (int i = 0; i < 10;i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
	}

	for (int i = 0; i < 10; i++) {
		printf("%c ", GEM_CHARS[gems[i]]);
	}

	return 0;
}
//宝石をランダムに並べて表示
