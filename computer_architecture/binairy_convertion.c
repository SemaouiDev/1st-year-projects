#include <stdio.h>
int main() {
    double number, decimal_num;
    int integer_num1, integer_num2, integer_num3, i, j;
    int bits[8];

    for ( j = 1; j > 0; j++) {
        printf("Enter a number: ");
        scanf("%lf", &number);

        integer_num1 = number;
        integer_num2 = number;
        decimal_num = number - integer_num1;

        for ( i = 7; i >= 0; i--) {
            bits[i] = integer_num1 % 2;
            integer_num1 /= 2;
        }

        for ( i = 0; i <= 7; i++) {
            printf("%d", bits[i]);
        }
        printf(",");

        for ( i = 0; i < 8; i++) {
            decimal_num *= 2;
            integer_num3 = decimal_num;
            decimal_num -= integer_num3;

            printf("%d", integer_num3);
        }
        printf("\n\n");
    }
    return 0;
}