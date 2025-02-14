#include<stdio.h>
int sum_of_digits(int n){
    int sum=0;
    for(int i=10;n%i !=0;i=i)
    {
    sum= sum+ (n%i);
    n=n/i;
    }
return sum;
}
//use while loop solving again

int main(){
    int q;
    printf("enter the number\n");
    scanf ("%d ",&q);
    printf("The sum is: %d",sum_of_digits(q));
    return 0;
}