#include<stdio.h>
int main()
{
    int n, i, a, b;
    double c;

    scanf("%d", &n);

    for (i=0;i<n;i++){
        scanf("%d%d", &a, &b);

        if (b==0){
            printf("divisao impossivel\n");
        }
        else {
            c=a/(b*1.0);
            printf("%.1lf\n", c);
        }
    }
}
