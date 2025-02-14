#include <stdio.h>

void sums(int mat[3][3], int r, int c,int *sum,int *diff) {
    int i, j;
    int upper_sum = 0;
    int lower_sum = 0;

    // Calculate the sum for the upper triangle
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i <= j) {
                upper_sum += mat[i][j];
            }
        }
    }
    

    // Calculate the sum for the lower triangle
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (j <= i) {
                lower_sum += mat[i][j];
            }
        }
    }
    *sum = upper_sum + lower_sum;
    if(upper_sum > lower_sum)
    *diff = upper_sum - lower_sum;
    else
    *diff =  lower_sum- upper_sum ;
}

int main() {
    int sum,diff;
    int r = 3;
    int c = 3;
    int mat[3][3] = {
        {6, 5, 4},
        {1, 2, 5},
        {7, 9, 7}
    };

    sums(mat, r, c,&sum,&diff);
    printf("%d %d",sum,diff);

    return 0;
}
