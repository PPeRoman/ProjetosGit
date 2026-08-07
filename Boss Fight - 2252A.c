#include <stdio.h>
#include <string.h>

int main(void)
{
    int t, n, vida, a, f[1001], mf, vr, perm, perd;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        vida = 0 ;
        memset(f, 0, sizeof(f));
        scanf("%d", &n);

        for (int j = 0; j < n; j++) {
            scanf("%d", &a);
            vida = vida + a ;
            f[a] = f[a] + 1 ;
        }

        mf = 0 ;
        vr = 0 ;

        for (int j = 0; j < 1001; j++) {
            if (f[j] > mf) {
                mf = f[j] ;
                vr = j ;
            }
        }
        perm = (n - mf) + 2 ;
        if (mf > perm) {
            perd = mf - perm ;
            vida = vida - (perd * vr) ;
        }
        printf("%d\n", vida);
    }

    return 0;
}
