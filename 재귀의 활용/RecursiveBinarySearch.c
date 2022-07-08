#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if(first>last)
		return -1;
	mid=(first+last)/2; //중앙 인덱스. ar[]은 그대로 놔둬야 인덱스가 살아 있으므로 first, last를 조정해 mid인덱스를 구한다
	if (ar[mid]==target) //문법: C에서는 조건을 쓸 때 ()를 포함해야 한다
		return mid;
	else if(ar[mid]>target) //문법: if else가 아니라 else if. if옆에만 조건이 붙을 수 있다고 생각하면 헷갈리지 않는다
		return BSearchRecur(ar,first, mid-1,target);
	else
		return BSearchRecur(ar, mid+1, last, target);


	
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
	if(idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 2);
	if(idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	return 0;
}