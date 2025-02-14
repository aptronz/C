#include<stdio.h>
#define MAX 100
int main()
{
    int A[MAX],n,i,t=0;
    printf("Enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    for(i=0;i<n;i++)
        t=t^A[i];

    printf("Distinct Number: %d\n",t);
    return 0;   
}