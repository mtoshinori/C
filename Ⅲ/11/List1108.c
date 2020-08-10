#include <stdio.h>

int main(int argc, char** argv)
{
	printf("argc=%d\n", argc);
	for (int i = 0; i < argc; i++) {
		char* strAddr = argv[i];
		printf("%d番目の情報: %s\n", i, strAddr);
	}
	return 0;
}
