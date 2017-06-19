#include<stdio.h>

int main()
{
    int num, slryprhr;
    float time;
    scanf("%d%d%f", &num, &slryprhr, &time);

    printf("NUMBER = %d\n", num);

    float salary=slryprhr*time;

    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}

