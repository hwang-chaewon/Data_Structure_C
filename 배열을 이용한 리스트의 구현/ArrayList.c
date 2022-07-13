//ArrayList.c : ������ ����!

#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)
{
	(plist->numOfData) = 0;//�ʱ�ȭ�ϱ� ����� ������ �� 0
	(plist->curPosition) = -1; //-1�� �ƹ����� curPosition�� ��ġ��Ű�� ���� ���̶�� ǥ��
}

void LInsert(List * plist, LData data)
{
	if(plist->numOfData > LIST_LEN) //�迭�� ũ�⺸�� ���� �����ϰ��� �ϸ�, ���� �Ұ� ǥ���ϰ� ����������
	{
		puts("������ �Ұ����մϴ�.");
		return;
	}

	plist->arr[plist->numOfData] = data; //numOfData�� �ε����� ����� data����
	(plist->numOfData)++; //numOfData 1������Ű��: 0,1,2,...������� �����͸� ������ ���̶�� �ǹ�
}

int LFirst(List * plist, LData * pdata)//��ȯ��: TRUE or FALSE
{
	if(plist->numOfData == 0)
		return FALSE;

	(plist->curPosition) = 0;//���� ��ġ: �ε��� 0
	*pdata = plist->arr[0]; //�ε��� 0�� �� ����
	return TRUE;
}

int LNext(List * plist, LData * pdata)
{
	if(plist->curPosition >= (plist->numOfData)-1)//curPosition�� �迭�� ������ ��ҿ� �� �ִٸ� ���� �����Ͱ� �����Ƿ� FALSE ����
		return FALSE;

	(plist->curPosition)++;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

LData LRemove(List * plist)
{
	int rpos = plist->curPosition;
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos];

	for(i=rpos; i<num-1; i++)
		plist->arr[i] = plist->arr[i+1]; //���� ���� ��ġ���� �ڿ� �� �� ĭ�� ������ ������ ��

	(plist->numOfData)--; 
	(plist->curPosition)--; //curPosition�� 1�ٿ���, ����ϰ� �������� ���ϴ� �����Ͱ� ����..
	return rdata;//������ ������ ����
}

int LCount(List * plist)
{
	return plist->numOfData;
}