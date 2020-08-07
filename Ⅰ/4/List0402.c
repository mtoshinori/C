#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool doorClosed = true;
	while (doorClosed == true) {
		printf("ノックする\n");
		printf("１分待つ\n");
	}
	return 0;
}
//無限ループ
