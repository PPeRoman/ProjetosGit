#include <stdio.h>

int main(void)
{
	int n;
	long long a, b, c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a > b) {
			printf("First\n");
		}
		else if (a < b) {
			printf("Second\n");
		}
		else if (a == b && (c % 2) == 0) {
			printf("Second\n");
		}
		else if (a == b && (c % 2) != 0) {
			printf("First\n");
		}
	}

	return 0;
}
