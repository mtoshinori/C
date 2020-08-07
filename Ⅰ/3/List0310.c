#include <stdio.h>

typedef char String[1024];

int main(void)
{
	int age = 29;
	String name = "ひまわり";
	printf("私は%d歳の%sです。\n",age,name);
	return 0;
}
//プレースホルダ
