#include <stdio.h>

void Recursive(int num)//재귀의 개념이 들어있는 함수
{
	if(num<=0)
		return; //문법: 리턴값이 필요없는 void함수에서 굳이 return;을 한다는 것은 '함수의 종결'을 의미

	/*
	헷갈리는 점: 출력 구문이 먼저 있으니, Recursive함수 실행시 재귀 호출보다 출력이 먼저 되는 것 아닌가?
	프로그램 안에 있는 모든 구문들은 프로그램이 종료되어야만 실행이 되는 것인가?
	*/
	printf("Recursive call! %d \n", num);
	Recursive(num-1);
}

int main(void)
{
	Recursive(3);
	return 0;
}