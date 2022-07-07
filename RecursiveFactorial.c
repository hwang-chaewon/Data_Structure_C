#include <stdio.h>

int Factorial(int n)
{
   if(n==0)
       return 1;
   else
       return n * Factorial(n-1);
}

int main(void)
{
	printf("0! = %d \n", Factorial(0)); //n=0일 경우 재귀 호출 없이 바로 1만 return
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));
	return 0;
}