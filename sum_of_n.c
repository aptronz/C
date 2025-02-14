#include <stdio.h>
 void sum(int a, int b){
     if (a==0){
     printf("%d",b);
     return;
     }
    
    sum(a-1,b+a);
    return;
 }
 int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    sum(n,0);
    return 0;
 }