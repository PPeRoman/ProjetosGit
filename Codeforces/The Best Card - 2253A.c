#include <stdio.h>

int primo(int x)
{
	if (x <= 1) return 0;
	
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return 0;
	}
	
	return 1;
}

int main(void)
{
	int t, n;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		if (primo(n + 1) == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
