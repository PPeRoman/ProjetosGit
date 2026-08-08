#include <stdio.h>

int main(void)
{
	int n;
	int output = 0;
	int letraI, letraM, letraF;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &letraI, &letraM, &letraF);
		if ((letraI + letraM + letraF) >= 2) {
			output++ ;
		}
	}
	printf("%d\n", output);

	return 0;
}
