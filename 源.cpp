#include <iostream>

using namespace std;

int a[10];

void f(int i, int j, int sum) // i 为数组下标，j 为圈数，sum 为上一递归函数的总圈数
{
    while (++j <= 20) // 圈数递增，且限制在 20 以内
    {
        if (j + sum > 20) return; // 递归出口

        int t = sum + j; // 求总圈数

        if (t < 20) // 总圈数小于 20
        {
            a[i] = j; // 存储当前圈数
            f(i + 1, j, t); // 递归到下一层
        }
        else if (t == 20) // 总圈数等于 20，输出当前方案
        {
            a[i] = j;
            if (i > 1)
            {
                for (int k = 1; k <= i; k++) // 打印方案
                    printf("%d ", a[k]);
                puts(""); // 换行
            }
            return; // 递归出口
        }
    }
}

int main()
{
    f(1, 0, 0);
    getchar();
    return 0;
}
