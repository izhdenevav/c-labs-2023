#include<stdio.h>

int main() {

    int n, i = 0, sum = 0;

    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("%d", sum);
    
    return 0;
}
