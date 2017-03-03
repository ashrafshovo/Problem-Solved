#include<stdio.h>
int main()
{
    int i, n,j, a[1001];
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for (j=n;j>0;j--){
        printf("%d ",a[j]);
    }
    printf("\n");
    return 0;
}
