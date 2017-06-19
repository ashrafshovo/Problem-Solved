#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,temp,result;
    scanf("%d%d%d",&a,&b,&c);
    temp=(a+b+abs(a-b))/2;
    result=(temp+c+abs(temp-c))/2;
    printf("%d eh o maior\n",result);
    return 0;
}

