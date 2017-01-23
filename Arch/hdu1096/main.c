#include <stdio.h>

int main() {
    int n_line;
    scanf("%d", &n_line);
    for (int i = 0; i < n_line; i++) {

        int n_num;
        scanf("%d", &n_num);

        int sum = 0;
        int add;
        for (int j = 0; j < n_num; j++) {
            scanf("%d", &add);
            sum += add;
        }

        if (i > 0) {
            printf("\n");
        }
        printf("%d\n", sum);
    }

    return 0;
}