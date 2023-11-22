#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);
    if (n == 0)
        printf("1");
    else {
        for (int i = n - 1; i > 0; i--) {
            n = n * i;
        }
        printf("%d", n);
    }
}