//ArrayList 구조체 선언
//ArrayList구조체 변수의 포인터가 들어가는 함수들의 원형 정의
#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#include "Point.h"     // 첫 번째 변경

#define TRUE	1
#define FALSE	0

#define LIST_LEN	100

// typedef int LData;
typedef Point * LData;     // 두 번째 변경

typedef struct __ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
} ArrayList;


typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif