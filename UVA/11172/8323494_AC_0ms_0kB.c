#include<stdio.h>
int main()
{
    int a, b, c, i;
    scanf("%d", &a);
    for (i=0;i<a;i++){
        scanf("%d%d", &b, &c);
        if (b<c){
            printf("<\n");
        }
        if (b>c){
            printf(">\n");
        }
        if (b==c) {
            printf("=\n");
        }
    }
    return 0;
}
