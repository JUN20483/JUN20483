#include <stdio.h>

int main() {
    int n, m;

    int a[11];

    scanf("%d %d", &n, &m);

    a[0] = n;
    a[1] = m;

    for (int i = 2; i < 10; i++) {
        a[i] = (a[i - 2] + a[i - 1]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}