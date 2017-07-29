//
//  main.c
//  BucketSort
//
//  Created by 王增康 on 16/1/17.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>

int main() {
    /*
     5个人的成绩分别为8，5，5，3，2
     总分为10分
     排序：大-->小，小-->大
     */
    int book[11],j,i,n;
    for (i = 0; i <= 10; i++)
    {
        book[i] = 0;//初使化数组为0，表示现在任何成绩都为0
    }
    for (i = 0; i< 5; i++)
    {
        printf("请输入学生的成绩:");
        scanf("%d",&n);
        book[n]++;
    }
    printf("从小到大的排序为\n");
    for (i = 0; i <= 10; i++)
    {
        for (j = 1; j <= book[i]; j++)
        {
            printf("%d",i);
        }
    }
    printf("\n从大到小的排序为\n");
    for (i = 10; i >= 0; i--)
    {
        for (j = 1; j <= book[i]; j++ )
        {
            printf("%d",i);
        }
    }
    //用来暂停程序，以便查看程序输出的内容
    getchar();getchar();
    return 0;
}
