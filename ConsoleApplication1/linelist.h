#pragma once
/*
ĳ�����˾��Լ��30��Ա����ÿ��Ա�������������š�ְ������ԣ�ÿ�궼��Ա����ְ����ְ��������Ա������һ�����Ա�������ְ����ְ����������Ա����ְ����ְʱ���޸����Ա�������ʾ���µ�Ա��������
Ҫ��:1)˳���洢��ʵ��˳���Ĳ��롢ɾ�������ҡ�����Ȼ������������û���������ɡ�2)����洢��ʵ������Ĳ��롢ɾ�������ҡ�����Ȼ������������û���������ɡ�
*/
//���ݽṹ ���Ա�
/*�������Ա� ���������������š�ְ��*/
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
//��ʼ��˳���
void  InitList(LINE &L,int length);
//���Ԫ��
bool addElement(LINE &L, STUFF &S);
//ɾ��Ԫ��
bool delElement(LINE &L, int n);
//����
int findElement(LINE &L, int num);
int findElement(LINE &L, char *name);
//���
void printLineList(LINE &L);
