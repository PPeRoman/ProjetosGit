#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int work(void)
{
	long long l = 0, r = 1000000001;
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		long long w;
		scanf("%lld", &w);
		if (i % 2 != 0)
			r = MIN(r, w) ;
		else
			l = MAX(l, w) ;
	}

	if (n % 2 == 0 && l + 2 <= r)
		printf("%s\n", "YES");
	else
		printf("%s\n", "NO");
}

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
		work();

	return 0;
}
