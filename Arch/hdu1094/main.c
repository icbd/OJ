#include <stdio.h>

int main() {

    int n_num;
    while (scanf("%d", &n_num) != EOF) {

        int sum = 0;
        int add;
        for (int j = 0; j < n_num; j++) {
            scanf("%d", &add);
            sum += add;
        }
        printf("%d\n", sum);
    }

    return 0;
}