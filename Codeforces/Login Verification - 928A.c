#include <stdio.h>
#include <string.h>
#include <ctype.h>

int login(char *s)
{
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = tolower(s[i]) ;
		
		if (s[i] == 'o')
			s[i] = '0';
		else if (s[i] == 'i' || s[i] == 'l')
			s[i] = '1';
	}
}


int main(void)
{
	int n, sim = 0;
	char s[60], loginEx[60];
	
	if (scanf("%55s", s) != 1)
		return 0;
	
	login(s);
	
	if (scanf("%d", &n) != 1)
		return 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%55s", loginEx);
		login(loginEx);
		
		if (strcmp(s, loginEx) == 0)
			sim = 1 ;
	}
	if (sim)
		printf("No\n");
	else
		printf("Yes\n");
	
	return 0;
}