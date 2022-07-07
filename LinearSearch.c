#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
	int i;
	for(i=0;i<len;i++){
		if (ar[i]==target) //문법: ':'를 붙이지 않는다
			return i; //찾았을 경우 그 인덱스 반환
	}
	return -1;    //찾지 못했음을 의미하는 값 반환
}

int main(void)
{
	int arr[]={3, 5, 2, 4, 9};
	int idx;

	idx=LSearch(arr, sizeof(arr)/sizeof(int), 4); //문법: length를 구하기 위해서 sizeof로 size를 측정해 나누는 방식
	if(idx==-1)
		printf("해당 숫자가 배열에 없습니다 \n");
	else
		printf("해당 숫자가 위치한 인덱스는 다음과 같습니다 : %d \n", idx);

	idx=LSearch(arr, sizeof(arr)/sizeof(int), 7);
	if(idx==-1)
		printf("해당 숫자가 배열에 없습니다 \n");
	else
		printf("해당 숫자가 위치한 인덱스는 다음과 같습니다: %d \n", idx);

	return 0;
}