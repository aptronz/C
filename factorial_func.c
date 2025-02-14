#include<stdio.h>
int factorial(int num)
{
    if(num==1||num==0)
    return 1;
    else
    return(num*factorial(num-1));
}

int main()
{
    int num,a;
    scanf("%d",&num);
    a=factorial(num);
    printf("%d",a);
    return 0;

}