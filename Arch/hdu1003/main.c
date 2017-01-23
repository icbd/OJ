#include <stdio.h>

//最大子串儿和
//DP转移公式
//cur_sum[i] = MAX{ cur_sum[i-1] + cur_num, cur_num }

#define INF -1001
typedef struct {
    int sum;
    int start;
    int end;
} Answer;


int main() {
    int n_line;
    scanf("%d", &n_line);

    for (int i = 0; i < n_line; i++) {

        //初始化结果结构
        Answer ans;
        ans.sum = INF;
        ans.start = 1;
        ans.end = 1;

        int count;
        scanf("%d", &count);
        int cur_start = 1;
        int cur_end = 1;
        int cur_sum = INF;

        for (int j = 1; j <= count; j++) {
            int cur_num;
            scanf("%d", &cur_num);

            if (cur_sum + cur_num < cur_num) {

                //丢弃之前的所有
                cur_start = j;
                cur_end = j;
                cur_sum = cur_num;

            } else {
                //尾部前移
                cur_end++;
                cur_sum += cur_num;
            }

            //单独更新结果结构
            if (cur_sum > ans.sum) {
                ans.sum = cur_sum;
                ans.start = cur_start;
                ans.end = cur_end;
            }
        }

        if (i == 0) {
            printf("Case 1:\n");
        } else {
            printf("\nCase %d:\n", i + 1);
        }

        printf("%d %d %d\n", ans.sum, ans.start, ans.end);

    }
    return 0;
}