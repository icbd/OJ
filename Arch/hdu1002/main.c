#include <stdio.h>
#include <string.h>

//大数相加,模拟手工加法

#define MAXLEN 1001
char a[MAXLEN];
char b[MAXLEN];
char sum[MAXLEN + 1];

void bigAdd(const char *a, const char *b, char (*sum)[]);


int main() {

    int couple;
    scanf("%d", &couple);
    for (int i = 0; i < couple; i++) {

        scanf("%s %s", a, b);

        bigAdd(a, b, &sum);

        if (i > 0) {
            printf("\n");
        }
        printf("Case %d:\n", i + 1);
        printf("%s + %s = %s\n", a, b, sum);
    }

    return 0;
}

void bigAdd(const char *a, const char *b, char (*sum)[]) {
    memset((*sum), '\0', sizeof((*sum)[0]));

    int a_len = (int) strlen(a);
    int b_len = (int) strlen(b);

    int len = (a_len > b_len) ? a_len : b_len;//max

    int next = 0;//进位
    for (int i = len; i > 0; i--) {
        int a_cur = 0;
        int b_cur = 0;
        if (a_len > 0) {
            a_cur = a[--a_len] - '0';
        }
        if (b_len > 0) {
            b_cur = b[--b_len] - '0';
        }

        int sum_cur = a_cur + b_cur + next;
        if (sum_cur < 10) {
            (*sum)[i] = (char) (sum_cur + '0');
            next = 0;
        } else {
            char cur = (char) ((sum_cur % 10) + '0');
            (*sum)[i] = cur;
            next = sum_cur / 10;
        }
    }
    (*sum)[0] = (char) (next + '0');

    if (next == 0) {
        for (int i = 0; i < len; ++i) {
            (*sum)[i] = (*sum)[i + 1];
        }
        (*sum)[len] = '\0';
    }
}