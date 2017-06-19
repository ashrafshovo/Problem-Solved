#include<stdio.h>
int main()
{
    int a,b,c,d;
    float p,q;
    scanf("%d%d%f%d%d%f",&a,&b,&p,&c,&d,&q);

    float result=b*p+d*q;

    printf("VALOR A PAGAR: R$ %.2f\n",result);

    return 0;
}

