#include <stdio.h>

int main() {
    int count;
    while (scanf("%d", &count) != EOF && count != 0) {
        int sum = 0;
        int num;
        for (int i = 0; i < count; i++) {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }

    return 0;
}