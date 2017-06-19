#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,x1,y1,x2,y2;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    a=x2-x1;
    b=a*a;
    c=y2-y1;
    e=c*c;

    d=sqrt(b+e);

    printf("%.4lf\n",d);

    return 0;
}

