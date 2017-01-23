#include <stdio.h>

int main() {
    int n_line;
    scanf("%d", &n_line);

    int a, b;
    for (int i = 0; i < n_line; ++i) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}