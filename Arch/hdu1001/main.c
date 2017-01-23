#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {

        long long sum = 0;
        for (int i = 0; i <= n; i++) {
            sum += i;
        }

        printf("%lld\n\n", sum);//题目中给的样例输出少了一个空行
    }
    return 0;
}