#include<stdio.h>

int main()
{
    int a,b,i;

    scanf("%d",&b);

    for (i=1;i<=b;i++){
        a=i%2;
        if(a==1){
            printf("%d\n",i);
        }
    }

    return 0;
}

