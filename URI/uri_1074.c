#include<stdio.h>
int main()
{
    int a,t,i;
    scanf("%d", &t);

    for (i=0;i<t;i++){
        scanf("%d", &a);
        if (a==0){
            printf("NULL\n");
        }
        else if (a%2==0 && a>=0){
            printf("EVEN POSITIVE\n");
        }
        else if (a%2==-1 && a>=0){
            printf("ODD POSITIVE\n");
        }
        else if (a%2==0 && a<=0){
            printf("EVEN NEGATIVE\n");
        }
        else if (a%2==-1 && a<=0){
            printf("ODD NEAGTIVE\n");
        }
    }

    return 0;

}


/*
URI Judge solve



#include <stdio.h>
int main()
{
    int N,X,a;
    scanf ("%d", &N);
    for(a=1;a<=N;a++)
    {
        scanf ("%d",&X);
        if(X==0)
            printf("NULL\n");
        else if(X<=0&&X%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(X<=0&&X%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(X>=0&&X%2==0)
            printf ("EVEN POSITIVE\n");
        else if(X>=0&&X%2==1)
            printf ("ODD POSITIVE\n");
    }
    return 0;
}

*/
