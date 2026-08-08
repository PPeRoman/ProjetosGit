#include <stdio.h>
#include <string.h>

int main(void)
{ 
	int val;
	int i, n, c;
	char words[101], letraI, letraF;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", &words);
		for (c = 0; words[c] != '\0'; ++c) {
			if (words[c + 1] == '\0') {
				if (c >= 10) {
					letraI = words[0] ;
					val = strlen(words) - 2 ;
					letraF = words[val + 1] ;
					printf("%c%d%c\n", letraI, val, letraF);
				}
				else if (c < 10) {
					printf("%s\n", words);
				}
			}
		}
	}

	return 0;
}
