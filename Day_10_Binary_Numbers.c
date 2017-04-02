#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int max = 1;
int conseMax(int);
int main(){
    int input, n;
    scanf("%d", &input);
    n = input;

    while(n > 0)
        n = conseMax(n);

    printf("%d", max);
    return 0;
}

int conseMax(int n)
    {
    int count = 0;

    while(n > 0)
        {
        if(n % 2 != 0)
            {
            count++;
            n /= 2;
        }
        else
            {
            n /= 2;
            break;
        }
    }

    if(count > max)
        max = count;

    if(n > 0)
        return n;
    else
        return 0;
}
