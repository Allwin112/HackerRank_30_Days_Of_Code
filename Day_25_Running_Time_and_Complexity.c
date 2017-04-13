#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int total, num, i, j, flag, sr;

    scanf("%d", &total);

    for(i = 0; i < total; i++)
        {
        flag = 0;
        j = 3;
        scanf("%d", &num);

        if(num == 2)
            {
            printf("Prime\n");
            continue;
        }
        else if(num % 2 == 0)
            {
            flag = 1;
            goto result;
        }

        sr = ceil(sqrt(num)) + 1;

        while(j <= sr)
            {
            if(num % j == 0)
                {
                flag += 1;
                break;
            }
            j += 2;
        }

        result:
        if(flag == 1 || num == 1)
            printf("Not prime\n");
        else
            printf("Prime\n");
    }
    return 0;
}

