#include<stdio.h>
int main()
{
    int p1, p2, p3, w;

    scanf("%d%d%d%d", &p1, &p2, &p3, &w);

    if (p1+p2+p3>w){
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
