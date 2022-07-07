#include <stdio.h>

//최악의 경우에서, Binary Search의 operation횟수를 count하는 클래스
int BSearch(int ar[], int len, int target)
{
	int first=0;
	int last=len-1;
	int mid; 
	int opCount=0;   // 비교연산의 횟수를 기록

	while(first<=last)
	{
		mid=(first+last)/2;

		if(target==ar[mid])
		{
			return mid; //최악의 경우를 상정하므로 return mid가 실행될 일은 없을 것
		}
		else 
		{
			if(target<ar[mid])   
				last=mid-1;
			else
				first=mid+1;
		}
		opCount+=1;   // 비교연산의 횟수 1 증가
	}
	printf("비교연산 횟수: %d \n", opCount);  // 탐색 실패 시 연산횟수 출력
	return -1;
} 

int main(void)
{
	//최악의 경우 상정
	int arr1[500]={0,};    // 500개의 요소 0으로 초기화
	int arr2[5000]={0,};    // 5000개의 요소 0으로 초기화
	int arr3[50000]={0,};    // 50000개의 요소 0으로 초기화
	int idx;

	// 저장되지 않은 정수 1을 찾으라고 명령
	idx=BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
	if(idx==-1)
		printf("탐색 실패 \n\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	// 저장되지 않은 정수 2를 찾으라고 명령
	idx=BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
	if(idx==-1)
		printf("탐색 실패 \n\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	// 저장되지 않은 정수 3을 찾으라고 명령
	idx=BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
	if(idx==-1)
		printf("탐색 실패 \n\n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	return 0;
}