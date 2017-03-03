#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, t;

    while (scanf("%d", &t)==1){

        for (i=0;i<t;i++){
            scanf("%d", &n);
            n=n*567;
            n=n/9;
            n=n+7492;
            n=n*235;
            n=n/47;
            n=n-498;
            n=n/10;
            n=n%10;
            n=abs(n);

            printf("%d\n", n);
        }

    }

    return 0;
}
