#include<stdio.h>

int main()
{
    double a,b,c;
    float pi=3.14159,triangle,circle,square,trapizoid,rectangle;
    scanf("%lf%lf%lf",&a,&b,&c);

    triangle=0.5*a*c;
    circle=pi*c*c;
    trapizoid=((a+b)/2)*c;
    square=b*b;
    rectangle=a*b;

    printf("TRIANGULO: %.3f\n",triangle);
    printf("CIRCULO: %.3f\n",circle);
    printf("TRAPEZIO: %.3f\n",trapizoid);
    printf("QUADRADO: %.3f\n",square);
    printf("RETANGULO: %.3f\n",rectangle);

    return 0;
}

