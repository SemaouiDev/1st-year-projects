 // Pyramid Pascal's triangle
#include <stdio.h>
int Combination(int a, int b) {
    int Fact_1=1, Fact_2=1, Fact_3=1, Comb;
    for (int i = 1; i <= a; i++)
        Fact_1 *= i;
    for (int i = 1; i <= b; i++)
        Fact_2 *= i;
    for (int i = 1; i <= a-b; i++)
        Fact_3 *= i;
    Comb = Fact_1 / (Fact_2 * Fact_3);
    return Comb;}
int main() {
    int C, lines, space, line_space;
    char symbol;
    printf("Do you wanna try (y/n) ?: ");
    scanf("%s", &symbol);
    for (int l = 1; l > 0; l++)
    {
        if (symbol == 89 || symbol == 121) {
            printf("Enter number of lines: ");
            scanf("%d", &lines);
            line_space = lines;
            if (lines<6) {
            for (int n = 0; n < lines; n++) {
                space = ((60 - n*2) / 2);
                for (int s = 0; s < space; s++)
                    printf(" ");
                for (int k = 0; k <= n; k++) {
                    C = Combination(n,k);
                    printf("%d ", C);}
                printf("\n");}
            }
            else if (lines<10) {
            for (int n = 0; n < lines; n++) {
                space = ((60 - n*2) / 2);
                for (int s = 0; s < space; s++)
                    printf(" ");
                for (int r = 0; r < line_space; r++)
                    printf(" ");
                --line_space;
                for (int k = 0; k <= n; k++) {
                    C = Combination(n,k);
                    C > 9 ? printf("%d  ", C): printf("0%d  ", C);
                }
                printf("\n");}
            }
            else if (lines<14) {
            for (int n = 0; n < lines; n++) {
                space = ((60 - n*2) / 2);
                for (int s = 0; s < space; s++)
                    printf(" ");
                for (int r = 0; r < line_space; r++)
                    printf("  ");
                --line_space;
                for (int k = 0; k <= n; k++) {
                    C = Combination(n,k);
                    C > 99 ? printf("%d   ", C):
                    C > 9 ? printf("0%d   ", C): printf("00%d   ", C);
                }
                printf("\n");}
            }
            else {
                printf("Sorry, it's a big number!! Please try again\n");
            }
            printf("\nDo you wanna try again?: ");
            scanf("%s", &symbol);
        }
        else if (symbol == 78 || symbol == 110) { return 0; }
    }
}




/*  // Simple Pascal's triangle
#include <stdio.h>
int Combination(int a, int b) {
    int Fact_1=1, Fact_2=1, Fact_3=1, Comb;
    for (int i = 1; i <= a; i++)
        Fact_1 *= i;
    for (int i = 1; i <= b; i++)
        Fact_2 *= i;
    for (int i = 1; i <= a-b; i++)
        Fact_3 *= i;
    Comb = Fact_1 / (Fact_2 * Fact_3);
    return Comb;}
int main() {
    int C, lines;
    printf("Enter number of lines: ");
    scanf("%d", &lines);
    if (lines<6) {
        for (int n = 0; n < lines; n++) {
            for (int k = 0; k <= n; k++) {
                C = Combination(n,k);
                printf("%d ", C);}
            printf("\n");}}
    else if (lines<10) {
        for (int n = 0; n < lines; n++) {
            for (int k = 0; k <= n; k++) {
                C = Combination(n,k);
                C > 9 ? printf("%d  ", C): printf("0%d  ", C);}
            printf("\n");}}
    else {
        printf("Sorry, it's a big number!! Please try again\n");}
} */