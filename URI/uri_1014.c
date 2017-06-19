#include<stdio.h>

int main()
{
    int a;
    double b;
    scanf("%d%lf",&a,&b);
    double result=a/b;
    printf("%.3lf km/l\n",result);
    return 0;
}
