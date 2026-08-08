#include <stdio.h>

int main(void)
{
	int n;
	int output = 0;
	char bit[4];
	scanf("%d", &n);
	if (n <= 150 && n >= 1) {
		for (int i = 0; i < n; i++) {
			scanf("%s", bit);
			if (bit[1] == '+') {
				output++ ;
			}
			else if (bit[1] == '-') {
				output-- ;
			}
		}
	}
	printf("%d\n", output);

	return 0;
}
