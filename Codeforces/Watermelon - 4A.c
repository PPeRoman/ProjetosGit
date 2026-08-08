#include <stdio.h>

int main(void)
{
	int kilos;
	scanf("%d", &kilos);
	if ((kilos % 2) == 0 && kilos != 2) {
		printf("YES\n");
	}
	else if ((kilos % 2) != 0 || kilos == 2) {
		printf("NO\n");
	}

	return 0;
}