#include <stdio.h>

char s[200005], snxt[200005];

void potato()
{
	int n, nxt, rt = 0, bt = 0;
	long long k;
	scanf("%d%lld", &n, &k);
	int n2 = n * 2;
    scanf("%s", s);

    for (int i = 0; i < n2; i++) {
        snxt[i] = '0' ;
    }
    snxt[n2] = '\0' ;

	for (int i = 0; i < n2; i++) {
		if (s[i] == '1') {
            nxt = (i + 1) % n2 ;

			if (s[nxt] == '0') {
                snxt[nxt] = '1' ;
			}
			else
                snxt[i] = '1' ;
		}
	}

	for (int i = 0; i < n2; i++) {
		if (snxt[i] == '1') {
            if (i % 2 == 0)
                bt++ ;
            else if (i % 2 != 0)
                rt++ ;
		}
	}
	printf("%d %d\n", rt, bt);

}

int main(void)
{
	int t;

    if (scanf("%d", &t) == 1) {
        for (int i = 0; i < t; i++) {
            potato();
        }
    }

	return 0;
}
