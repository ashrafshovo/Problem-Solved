#include<stdio.h>
#include<math.h>
int main()
{
    int i, n;
    long long a[60];

    a[0]=1;
    a[1]=2;

    for (i=2;i<55;i++){
        a[i]=a[i-1]+a[i-2];
    }

    while (scanf("%d", &n)){
        if (n==0) break;
            printf("%lld\n", a[n-1]);
    }

    return 0;
}
