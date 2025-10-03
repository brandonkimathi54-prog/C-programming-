/*
Name :Brandon kimathi
Reg No.CT101/G/26548/25
Deacription :mobile data bundle purchase
*/

#include <stdio.h>

int main() {
    int choice;

    printf("Option\\tBundle\\tCost (KES)\\n");
    printf("1\\t100 MB\\t50\\n");
    printf("2\\t500 MB\\t200\\n");
    printf("3\\t1 GB\\t350\\n");
    printf("4\\t2 GB\\t600\\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You have selected 100 MB bundle. Cost: 50 KES\\n");
            break;
        case 2:
            printf("You have selected 500 MB bundle. Cost: 200 KES\\n");
            break;
        case 3:
            printf("You have selected 1 GB bundle. Cost: 350 KES\\n");
            break;
        case 4:
            printf("You have selected 2 GB bundle. Cost: 600 KES\\n");
            break;
        default:
            printf("Invalid choice\\n");
    }

    return 0;
}
