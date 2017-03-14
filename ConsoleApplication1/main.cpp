#include<stdio.h>
#include<stdlib.h>
#include"linelist.h"
#define MAXLENGTH 30
void main()
{
	int N;
	int nums;
	int n;
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
			scanf("%s%*c%d %s", &S.name, &S.Jobnum, &S.duty);
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
			scanf("%d", &nums);
 			if ((n = findElement(L,nums))>= 0)
			{
				if (delElement(L, n))
				{
					printf("删除成功~");
				}
			}

		}break;
		case 3:{
			printf("请输入要查找的元素名：\n");
			char s[10];
			scanf("%s",&s);
			n = findElement(L, s);
			if (n>=0)
			{
				printf("%d 姓名: %s 工号： %d 职务: %s \n", n + 1, &L.sp[n].name, L.sp[n].Jobnum, &L.sp[n].duty);
			}
			else {
				printf("你查找的元素不存在！");
			}
		}break;
		case 4: {
			printLineList(L);
		}break;
		case 5:{
			exit(0);		}break;
		default: {continue;}
		}
	}
}