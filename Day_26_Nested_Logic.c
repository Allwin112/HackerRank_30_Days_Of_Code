#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int Da, Ma, Ya, De, Me, Ye, fine = 0;
    scanf("%d %d %d", &Da, &Ma, &Ya);
    scanf("%d %d %d", &De, &Me, &Ye);

    if(Ye > Ya)
        fine = 0;
    else if (Ye == Ya)
        if(Me > Ma)
            fine = 0;
        else if(Me == Ma)
            if(De >= Da)
                fine = 0;
            else
                fine = 15 * (Da - De);
        else
            fine = 500 * (Ma - Me);
    else
        fine = 10000;

    printf("%d", fine);
    return 0;
}
