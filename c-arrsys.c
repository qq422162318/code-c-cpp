#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n[10]; /* n 是一个包含 10 个整数的数组 */
    int i, j;

    /* 初始化数组元素 */
    for (i = 0; i < 10; i++)
    {
        n[i] = i + 100; /* 设置元素 i 为 i + 100 */
    }

    /* 输出数组中每个元素的值 */
    for (j = 0; j < 10; j++)
    {
        printf("Element[%d] = %d\n", j, n[j]);
    }

    return 0;
}
/* 要生成和返回随机数的函数 */
int *getRandom()
{
    static int r[10];
    int i;

    /* 设置种子 */
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }

    return r;
}
void func()
{
    /* 带有 5 个元素的整型数组 */
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    int i;

    p = balance;

    /* 输出数组中每个元素的值 */
    printf("使用指针的数组值\n");
    for (i = 0; i < 5; i++)
    {
        printf("*(p + %d) : %f\n", i, *(p + i));
    }

    printf("使用 balance 作为地址的数组值\n");
    for (i = 0; i < 5; i++)
    {
        printf("*(balance + %d) : %f\n", i, *(balance + i));
    }
}
double getAverage(int arr[], int size)
{
  int    i;
  double avg;
  double sum;
 
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
 
  avg = sum / size;
 
  return avg;
}