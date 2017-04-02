#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double mealCost, totalCost;
    int tipPercent, taxPercent;

    scanf("%lf %d %d", &mealCost, &tipPercent, &taxPercent);

    totalCost = (mealCost * (1 + (tipPercent + taxPercent)/100.00));

    printf("The total meal cost is %.0lf dollars.", round(totalCost));

    return 0;
}
