#include<stdio.h>
int main() {
    int note[] = {100, 50, 20, 10, 5, 2, 1};
    int n, t = 0;

    scanf("%d", &n);
    printf("%d\n", n);

    do {
    printf("%d nota(s) de R$ %d,00\n", n / note[t], note[t]);
    if (n >= note[t])
    n -= note[t] * (n / note[t]);
    }
    while(note[t++] != 1);

    return 0;
}

