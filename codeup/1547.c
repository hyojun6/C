#include <stdio.h>
int n;

int prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    if (prime(n)) printf("prime");
    else printf("composite");
    return 0;
}
