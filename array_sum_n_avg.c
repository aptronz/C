#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    float num[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; ++i) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", avg);

    return 0;
}
