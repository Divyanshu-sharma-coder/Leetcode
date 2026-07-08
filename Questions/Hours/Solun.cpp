#include <stdio.h>

int main() {
    int choice;
    float years;
    double result;

    printf("Enter number of years: ");
    scanf("%f", &years);

    printf("\nChoose conversion:\n");
    printf("1. Convert years to months\n");
    printf("2. Convert years to days\n");
    printf("3. Convert years to hours\n");
    printf("4. Convert years to minutes\n");
    printf("5. Convert years to seconds\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = years * 12;
            printf("%.2f years = %.2lf months\n", years, result);
            break;

        case 2:
            result = years * 365;
            printf("%.2f years = %.2lf days\n", years, result);
            break;

        case 3:
            result = years * 365 * 24;
            printf("%.2f years = %.2lf hours\n", years, result);
            break;

        case 4:
            result = years * 365 * 24 * 60;
            printf("%.2f years = %.2lf minutes\n", years, result);
            break;

        case 5:
            result = years * 365 * 24 * 60 * 60;
            printf("%.2f years = %.2lf seconds\n", years, result);
            break;

        default:
            printf("Invalid choice! Please select between 1 to 5.\n");
    }

    return 0;
}
