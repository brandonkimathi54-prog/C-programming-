/*
Name :Brandon kimathi
Reg No.CT101/G/26548/25
Deacription :exam eligibility
*/



#include <stdio.h>

int main() {
    float attendance, average_marks;

//user imput
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

//check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for exams\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}