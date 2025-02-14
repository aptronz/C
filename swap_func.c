#include <stdio.h>

void swap(int *a, int *b)
{
    int m;
    
    m = *a;
    *a = *b;
    *b = m;
}

int main()
{
    int i, j;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);
    swap(&i, &j);
    printf("After swapping: %d %d", i, j);
    return 0;
}
