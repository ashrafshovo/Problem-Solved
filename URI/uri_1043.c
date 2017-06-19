#include<stdio.h>

int main()
{
    float a,b,c,area,perimeter;

    scanf("%f%f%f",&a,&b,&c);

    if (a<b+c && b<a+c && c<a+b && a-b<c && b-c<a && a-c<b){
        perimeter=a+b+c;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else {
        area=((a+b)/2)*c;
        printf("Area = %.1f\n",area);
    }

    return 0;
}

