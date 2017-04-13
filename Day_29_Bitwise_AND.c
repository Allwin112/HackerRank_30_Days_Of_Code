#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, a0, i, j, max, bAnd, n, k;
    scanf("%d",&t);

    for(a0 = 0; a0 < t; a0++)
        {
        scanf("%d %d",&n,&k);
        max = 0;
        for(i = 1; i < k; i++)
            {
            for(j = i+1; j <= n; j++)
                {
                bAnd = i&j;
                if(bAnd > max && bAnd < k)
                    max = bAnd;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
