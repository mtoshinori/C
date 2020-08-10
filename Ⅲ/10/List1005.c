#include <stdio.h>
#include <stdlib.h>

int* readyAges(void)
{
	int* ages = (int*) malloc(16);
	return ages;	//先頭アドレス(9000)を返す
}

int main(void)
{
	int *a = readyAges();	//配列作成を依頼
	if (a == NULL) {
		printf("ヒープ確保に失敗しました\n");
	} else {
		a[0] = 19;	//9000〜9003番地に19を格納
		free(a);
	}

	return 0;
}
