#include <stdio.h>
 void increasing(int a){
    if(a==0) return;
    printf("%d\n",a);
    increasing(a-1);
    printf("%d\n",a);
    return;
 }
 int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    increasing(n);
    return 0;
 }