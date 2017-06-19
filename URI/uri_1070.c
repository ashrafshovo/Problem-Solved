#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=a;i<a+12;i++){
        if(i%2>0){
        printf("%d\n",i);
        }
    }
    return 0;
}

