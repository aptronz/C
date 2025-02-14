#include <stdio.h>

void prime(int j)
{
    for (int i=2;j>=i;i++)
    {
        if(j%i==0)
        {
            printf("Not prime");
            break;
        }
        else
        printf("Prime");
        break;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}




/* #include <stdio.h>

void prime(int* m)
{
    int j;
    j=*m/2;
    for (int i=2;j>=i;i++)
    {
        if(j%i==0)
        {
            printf("not Prime");
            break;
        }
        else
        {
        printf("prime");
        break;
        }
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(&n);
    return 0;
}
*/










/*
#include <stdio.h>

void prime(int* m)
{
    int j;
    j=*m/2;
    for (int i=2;j>=i;i++)
    {
        if(j%i==0)
        {
            return 0;
        }
        else
        {
        return 1;
        }
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(&n);
    return 0;
}
*/