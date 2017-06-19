#include<stdio.h>

int main()
{
    int a,b,c,d;

    scanf("%d",&a);

    b=a%60;
    c=(a/60)%60;
    d=a/3600;

    printf("%d:%d:%d\n",d,c,b);

    return 0;
}

