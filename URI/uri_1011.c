#include<stdio.h>

int main()
{
    int r;
    double pi =3.14159;
    scanf("%d", &r);
    double sphere= (4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n", sphere);
    return 0;
}

