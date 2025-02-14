#include<stdio.h>
#include<math.h>
int main(){
    double P,R,T,CI,A;
    printf("Enter principal, Rate, Time");
    scanf("%lf%lf%lf", &P,&R,&T);

    A=P*pow((1+R/100),(T));
    CI=A-P;
    printf("CI=%lf\n",CI);
    printf("A=%lf",A);
    return 0;
}