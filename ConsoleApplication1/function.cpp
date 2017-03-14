#include<stdio.h>
#include<stdlib.h>
#include"linelist.h"
#include<string>
void InitList(LINE &L,int length)
{
	L.Size = length;
	L.Length = 0;
	L.sp = (STUFF*)malloc(sizeof(STUFF)*length);
}
bool addElement(LINE &L, STUFF &S)
{
	if (L.Length >= L.Size)
	{
		return -1;
	}
	L.sp[L.Length] = S;
	L.Length++;
	return 1;
}
bool delElement(LINE &L, int n)
{
	if (n >= L.Length)
	{
		return false;
	}
	for (int i = n;i < L.Length-1;i++)
	{
		L.sp[i] = L.sp[i + 1];
	}
	L.Length--;
	return true;
}
int findElement(LINE &L, int num)
{
	for (int i = 0;i < L.Length;i++)
	{
		if (L.sp[i].Jobnum == num)
			return i; 
	}
	return -1;
}
int findElement(LINE &L, char *name)
{
	for (int i = 0;i < L.Length;i++)
	{
		if (strcmp(L.sp[i].name, name) ==0)
			return i;
		
	}
	return -1;
}
void printLineList(LINE &L)
{
	printf("打印线性表：\n");
	for (int i = 0;i < L.Length;i++)
	{
		printf("%d 姓名: %s 工号： %d 职务: %s \n", i + 1,&L.sp[i].name, L.sp[i].Jobnum, &L.sp[i].duty);
	}
}