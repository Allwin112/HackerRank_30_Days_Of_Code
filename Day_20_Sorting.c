#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, *a, swaps = 0;
    scanf("%d",&n);
    a = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
       scanf("%d",&a[i]);

    for(i = 0; i < n - 1; i++)
        {
        for(j = 0; j < n-i-1; j++)
            if(a[j] > a[j+1])
                {
                swaps++;
                a[j]+=a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j]-=a[j+1];
            }
        if(swaps == 0)
            break;
    }

    printf("Array is sorted in %d swaps.\n", swaps);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n-1]);
    return 0;
}
