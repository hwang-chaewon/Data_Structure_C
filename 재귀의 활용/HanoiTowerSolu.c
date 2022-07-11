#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
	if(num==1)    // 탈출 조건: 제일 큰 맨 마지막 원반만 남았다면
	{
		printf("원반1을 %c에서 %c로 이동 \n", from, to);
	}
	else
	{   
		HanoiTowerMove(num-1, from, to, by);    // 3단계 중 1단계: 누가 위의 (n-1)개만 중간 타워로 옮겨 준다면
		printf("원반%d을(를) %c에서 %c로 이동 \n", num, from, to);  // 3단계 중 2단계: 내가, 내가 맡은 맨 마지막 원반을 목적지로 옮기고
		HanoiTowerMove(num-1, by, from, to);    // 3단계 중 3단계: 중간 타워에 옮겨준 것들을 목적지로 옮기면 될 텐데
	}
}


int main(void)
{
	// 막대A의 원반 3개를 막대B를 경유하여 막대C로 옮기기
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}