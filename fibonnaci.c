
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    FILE *fp = fopen("data", "w");

    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Fibonacci Series: ");
    fprintf(fp, "Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        fprintf(fp, "%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    fclose(fp);
    printf("\nSeries saved to data file.\n");

    return 0;
}
