#include <iostream>

using namespace std;

int a[10];

void f(int i, int j, int sum) // i Ϊ�����±꣬j ΪȦ����sum Ϊ��һ�ݹ麯������Ȧ��
{
    while (++j <= 20) // Ȧ���������������� 20 ����
    {
        if (j + sum > 20) return; // �ݹ����

        int t = sum + j; // ����Ȧ��

        if (t < 20) // ��Ȧ��С�� 20
        {
            a[i] = j; // �洢��ǰȦ��
            f(i + 1, j, t); // �ݹ鵽��һ��
        }
        else if (t == 20) // ��Ȧ������ 20�������ǰ����
        {
            a[i] = j;
            if (i > 1)
            {
                for (int k = 1; k <= i; k++) // ��ӡ����
                    printf("%d ", a[k]);
                puts(""); // ����
            }
            return; // �ݹ����
        }
    }
}

int main()
{
    f(1, 0, 0);
    getchar();
    return 0;
}
