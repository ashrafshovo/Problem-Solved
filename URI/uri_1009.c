#include<stdio.h>

int main()
{
    double a,b,c,p,total;
    char d[20];
    scanf("%s",d);
    scanf("%lf",&a);
    scanf("%lf",&b);
    p=(b*15)/100;
    total=a+p;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}

