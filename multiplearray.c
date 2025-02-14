#include <stdio.h>

int main()
{
    int i,n, mul=1;
    
    printf("Enter size of the array");
    scanf("%d", &n);
    int mult[n];
    for(i=0;i<n;i++){
    printf("Enter the number: ");
    scanf("%d", &mult[i]);
     mul=mul*mult[i];
    }
    printf("%d",mul );
    return 0;
}
