#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if (n<2)
    {
        printf("Not a prime number.\n");
        return 0;
    }
    //AP
    else
    {
        for (i=2;i<(n/2);i=i+1)
        {
            if (n%i==0)
            {
                printf("Not a prime number.\n");
                return 0;
            }
        }
    }
    
        printf("PRIME NUMBER");
    
    return 0;
}