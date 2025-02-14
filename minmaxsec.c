#include <stdio.h>
#include <limits.h>

void sm(int a[][100], int m, int n, int min, int max) {
    int sm, SM;
    sm = INT_MAX;
    SM = INT_MIN;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != min) {
                if (sm > a[i][j])
                    sm = a[i][j];
            }
            if (a[i][j] != max) {
                if (SM < a[i][j])
                    SM = a[i][j];
            }
        }
    }
    printf("Second minimum: %d\nSecond maximum: %d", sm, SM);
}

int main() {
    int m, n, min, max;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &m, &n);
    int A[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    min = A[0][0];
    max = A[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (min > A[i][j])
                min = A[i][j];
            if (max < A[i][j])
                max = A[i][j];
        }
    }
    sm(A, m, n, min, max);
    return 0;
}
