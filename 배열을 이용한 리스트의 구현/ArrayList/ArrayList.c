//ArrayList.c : 구현해 보기!

#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)
{
	(plist->numOfData) = 0;//초기화니까 저장된 데이터 수 0
	(plist->curPosition) = -1; //-1은 아무데도 curPosition을 위치시키지 않을 것이라는 표시
}

void LInsert(List * plist, LData data)
{
	if(plist->numOfData > LIST_LEN) //배열의 크기보다 많이 저장하고자 하면, 저장 불가 표시하고 빠져나가기
	{
		puts("저장이 불가능합니다.");
		return;
	}

	plist->arr[plist->numOfData] = data; //numOfData를 인덱스로 사용해 data삽입
	(plist->numOfData)++; //numOfData 1증가시키기: 0,1,2,...순서대로 데이터를 저장할 것이라는 의미
}

int LFirst(List * plist, LData * pdata)//반환값: TRUE or FALSE
{
	if(plist->numOfData == 0)
		return FALSE;

	(plist->curPosition) = 0;//참조 위치: 인덱스 0
	*pdata = plist->arr[0]; //인덱스 0의 값 참조
	return TRUE;
}

int LNext(List * plist, LData * pdata)
{
	if(plist->curPosition >= (plist->numOfData)-1)//curPosition이 배열의 마지막 요소에 가 있다면 다음 데이터가 없으므로 FALSE 리턴
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
		plist->arr[i] = plist->arr[i+1]; //현재 참조 위치에서 뒤에 게 한 칸씩 앞으로 땡겨져 옴

	(plist->numOfData)--; 
	(plist->curPosition)--; //curPosition을 1줄여야, 억울하게 참조되지 못하는 데이터가 없다..
	return rdata;//삭제한 데이터 리턴
}

int LCount(List * plist)
{
	return plist->numOfData;
}
