#include<stdio.h>
#include<stdlib.h>
#include"linelist.h"
#define MAXLENGTH 30
void main()
{
	int N;
	int nums;
	int n;
	printf("���Ա���ѡ����Ҫ�Ĺ��ܣ�\n");
	printf("1�����Ԫ�ء�2��ɾ��Ԫ�ء�3������Ԫ�ء�4����ʾ���Ա����ݡ�5���˳���");
	LINE L;
	STUFF	S;
	InitList(L, MAXLENGTH);
	while (true)
	{
		scanf("%d", &N);
		switch (N)
		{
		case 1: {
			printf("���������� ���� ְ�� �ÿո������\n");
			scanf("%s%*c%d %s", &S.name, &S.Jobnum, &S.duty);
			if (!addElement(L, S))
			{
				printf("���ʧ�ܣ���������\n");
			}
			else {
				printf("��ӳɹ���\n");
				
			}
		}break;
		case 2: {
			printf("��������Ҫɾ��Ԫ�صĹ��ţ�\n");
			scanf("%d", &nums);
 			if ((n = findElement(L,nums))>= 0)
			{
				if (delElement(L, n))
				{
					printf("ɾ���ɹ�~");
				}
			}

		}break;
		case 3:{
			printf("������Ҫ���ҵ�Ԫ������\n");
			char s[10];
			scanf("%s",&s);
			n = findElement(L, s);
			if (n>=0)
			{
				printf("%d ����: %s ���ţ� %d ְ��: %s \n", n + 1, &L.sp[n].name, L.sp[n].Jobnum, &L.sp[n].duty);
			}
			else {
				printf("����ҵ�Ԫ�ز����ڣ�");
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