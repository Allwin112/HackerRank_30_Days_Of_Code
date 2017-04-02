#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a;
    char c[100];
    double b;

    scanf("%d", &a);
    scanf("%lf", &b);
    scanf("\n%[^\n]s",c);

    printf("%d\n", i + a);
    printf("%.1lf\n", d + b);
    printf("%s", s);
    printf("%s", c);

    return 0;
}
