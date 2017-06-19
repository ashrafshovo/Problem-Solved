#include<stdio.h>

int main()
{
    int a,i;

    for (i=1;i<=100;i++){
        a=i%2;
        if(a==0){
            printf("%d\n",i);
        }
    }

    return 0;
}

