#include <stdio.h>

int Fibo(int n)
{
	if(n==1)
		return 0;	
	if(n==2)
		return 1;
	else
		return Fibo(n-1)+Fibo(n-2);
   }

int main(void)
{
	int i;
	for(i=1; i<15; i++)//피보나치 수열의 14번째 값까지 순서대로 나열 
		printf("%d ", Fibo(i));

	return 0;
}