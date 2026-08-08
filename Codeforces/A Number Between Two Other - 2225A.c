#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	long long x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld%lld", &x, &y);		
		if (y == 2 * x) {
			printf("NO\n");
		}
		else if (y != 2 * x) {
			printf("YES\n");
		}
	}

	return 0;
}
