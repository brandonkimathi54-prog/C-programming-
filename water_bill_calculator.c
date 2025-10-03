/*
Name :Brandon kimathi
Reg No.CT101/G/26548/25
Deacription :water bill calculator
*/

#include <stdio.h>

int main() {
    int units;
    float total_bill;
 //user prompt
    printf("Enter water units consumed: ");
    scanf("%d", &units);
  
//  check eligibility
    if (units >= 0 && units <= 30) {
        total_bill = units * 20.0;
    } else if (units >= 31 && units <= 60) {
        total_bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else if (units > 60) {
        total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    } else {
        printf("Invalid input\\n");
        return 1;
    }

    printf("Total water bill: %.2f KES\\n", total_bill);

    return 0;
}
