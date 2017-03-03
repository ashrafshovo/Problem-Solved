#include<stdio.h>

int main ()
{
    int a,b,i,l,sum=0,testcase;

    scanf("%d", &testcase);


    for (l=1;l<=testcase;l++)
    {
        scanf("%d%d",&a,&b);

        for (i=a; i<=b;i++)
    {
        if (i%2==1)
        {
            sum=sum+i;
        }

    }

    printf("Case %d: %d\n",l,sum);

    sum=0;

    }

    return 0;
}
