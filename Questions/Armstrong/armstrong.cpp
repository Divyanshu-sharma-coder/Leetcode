#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Armstrong numbers between 1 and 100 are:\n");

    for (num = 1; num <= 100; num++) {
        originalNum = num;
        result = 0;
        n = 0;

        // Count the number of digits
        int temp = originalNum;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        originalNum = num;

        // Calculate the sum of digits raised to the power of n
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += (int)pow(remainder, n);
            originalNum /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == num) {
            printf("%d, ", num);
        }
    }
    return 0;
}
