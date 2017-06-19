#include<stdio.h>

int main()
{
    int a,b;
    float c;

    scanf("%d%d",&a,&b);

    if (a==1){
        c=b*4.00;
        printf("Total: R$ %.2f\n",c);
    }
    else if (a==2){
        c=b*4.50;
        printf("Total: R$ %.2f\n",c);
    }
    else if (a==3){
        c=b*5.00;
        printf("Total: R$ %.2f\n",c);
    }
    else if (a==4){
        c=b*2.00;
        printf("Total: R$ %.2f\n",c);
    }
    else {
        c=b*1.50;
        printf("Total: R$ %.2f\n",c);
    }

    return 0;
}

