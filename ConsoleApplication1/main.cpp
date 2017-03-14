#include<stdio.h>
#include"linelist.h"
#define MAXLENGTH 50
void main()
{
	int N;
	int num;
	int n;；；；
	printf("线性表：请选择需要的功能：\n");
	printf("1、添加元素。2、删除元素。3、查找元素。4、显示线性表内容。5、退出。");
	LINE L;
	STUFF	S;
	InitList(L, MAXLENGTH);
	while (true)
	{
		scanf("%d", &N);
		switch (N)
		{
		case 1: {
			printf("请输入姓名 工号 职务 用空格隔开：\n");
			scanf("%s %d %s", &S.name, &S.Jobnum, &S.duty);
			if (!addElement(L, S))
			{
				printf("添加失败，表已满。\n");
			}
			else {
				printf("添加成功。\n");
			}
		}break;
		case 2: {
			printf("请输入想要删除元素的工号：\n");
			scanf("%d", &num);
			if(n=findElement)

		}
		}
	}
}