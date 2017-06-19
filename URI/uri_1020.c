#include<stdio.h>
#include<math.h>

int main()
{
    int a,day,month,year;
    scanf("%d",&a);

    year=a/365;
    month=a%365/30;
    day=a%365%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}


