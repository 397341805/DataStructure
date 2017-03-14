#pragma once
/*
某软件公司大约有30名员工，每名员工有姓名、工号、职务等属性，每年都有员工离职和入职。把所有员工建立一个线性表，建立离职和入职函数，当有员工离职或入职时，修改线性表，并且显示最新的员工名单。
要求:1)顺序表存储；实现顺序表的插入、删除、查找、输出等基本操作；调用基本操作完成。2)链表存储；实现链表的插入、删除、查找、输出等基本操作；调用基本操作完成。
*/
//数据结构 线性表
/*建立线性表 属性有姓名、工号、职务*/
struct LINE
{
	STUFF *sp;
	int Length;
	int Size;
};
struct STUFF{
	char name[10];
	int Jobnum;
	char duty[10];

};
//初始化顺序表
void  InitList(LINE &L,int length);
//添加元素
bool addElement(LINE &L, STUFF &S);
//删除元素
bool delElement(LINE &L, int n);
//查找
int findElement(LINE &L, int num);
int findElement(LINE &L, char *name);
//输出
void printLineList(LINE &L);
