#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    char str[15];

    scanf("%d", &n);

    struct phonebook
        {
        char name[15];
        int number;
    }ph[n];

    for(i = 0; i < n; i++)
    {
        scanf("%s", ph[i].name);
        scanf("%d", &ph[i].number);
    }



    while(scanf("%s",str) == 1)
        {
        for(j = 0; j < n; j++)
            {
            if(!strcmp(ph[j].name, str))
                {
                printf("%s=%d\n", ph[j].name, ph[j].number);
                break;
            }
            else if(j == n-1)
                {
                  printf("Not found\n");
                  break;
            }
        }
    }
    return 0;
}
