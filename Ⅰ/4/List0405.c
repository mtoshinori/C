#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void)
{
	String answerNo;
	printf("C言語男子の名前は？\n");
	printf("1:ミナト  2:ミサキ  3:ツバサ  4:ミサエ\n");
	scanf("%s",answerNo);
	int n = atoi(answerNo);		//intに変換
	if (n == 2) {
		printf("大正解！見る目あるね！\n");
	} else {
		printf("残念。\n");
	}
	return 0;
}
//2が正解
