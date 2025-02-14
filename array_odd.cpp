#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    int num[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }

    printf("Odd numbers in the array are: ");
    for(i = 0; i < n; ++i) {
        if(num[i] % 2 != 0) {
            printf("%d ", num[i]);
        }
    }

    printf("\nNumbers at odd indices are: ");
    for(i = 0; i < n; ++i) {
        if(i % 2 != 0) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}
