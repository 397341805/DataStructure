#include<stdio.h>
#include"linelist.h"
#define MAXLENGTH 50
void main()
{
	int N;
	int num;
	int n;������
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
			scanf("%s %d %s", &S.name, &S.Jobnum, &S.duty);
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
			scanf("%d", &num);
			if(n=findElement)

		}
		}
	}
}