/**
 * @file bubble_sort.c
 * @author Listening (https://github.com/L-Super)
 * @brief
 * @date 2022-12-26
 *
 */

#include "../include/include.h"

/* 冒泡排序 */
void bubble_sort(int nums[], int size)
{
    // 外循环：待排序元素数量为 n-1, n-2, ..., 1
    for (int i = 0; i < size - 1; i++)
    {
        // 内循环：冒泡操作
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

/* 冒泡排序（标志优化）*/
void bubble_sort_with_flag(int nums[], int size)
{
    // 外循环：待排序元素数量为 n-1, n-2, ..., 1
    for (int i = 0; i < size - 1; i++)
    {
        bool flag = false;
        // 内循环：冒泡操作
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}

int main()
{
    int nums[6] = {4, 1, 3, 1, 5, 2};
    printf("冒泡排序后:\n");
    bubble_sort(nums, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("优化版冒泡排序后:\n");
    bubble_sort_with_flag(nums, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}