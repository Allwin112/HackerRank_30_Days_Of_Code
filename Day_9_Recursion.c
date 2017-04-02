#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int);

int main() {

    int num, fact;
    scanf("%d", &num);

    fact = factorial(++num);

    printf("%d", fact);
    return 0;
}

int factorial(int num)
    {
    int factTemp = 1;

    if(num > 1)
        {
        factTemp = factorial(--num) * num;
        return factTemp;
    }
    else
        return 1;
}
