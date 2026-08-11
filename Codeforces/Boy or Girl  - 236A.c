#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    
    if (scanf("%s", s) == 1) {
        int let[26] = {0}; 
        int dist = 0;

        for (int i = 0; i < strlen(s); i++) {
            int j = s[i] - 'a';
            
            if (let[j] == 0) {
                let[j] = 1;
                dist++;
            }
        }
		
        if (dist % 2 == 0) {
            printf("CHAT WITH HER!\n");
        } else {
            printf("IGNORE HIM!\n");
        }
    }

    return 0;
}