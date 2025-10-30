/*
Name :Brandon kimathi
Reg No.CT101/G/26548/25
Description :1D Array
*/

#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

    printf("Enter revenue for each day of the week:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}