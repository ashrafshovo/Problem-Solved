#include<stdio.h>

int main()
{
    int i;

    while (scanf("%d", &i)==1){
        if (i%5==0){
            printf("%d\n", i/5);
        }
        else {
            if (i%5%4==0){
                printf("%d\n", i/5+i%5/4);
            }
            else {
                if (i%5%4%3==0){
                    printf("%d\n", i/5+i%5/4+i%5%4/3);
                }
                else {
                    if (i%5%4%3%2==0){
                        printf("%d\n", i/5+i%5/4+i%5%4/3+i%5%4%3/2);
                    }
                    else{
                        printf("%d\n", i/5+i%5/4+i%5%4/3+i%5%4%3/2+i%5%4%3%2);
                    }
                }
            }
        }
    }

    return 0;
}
