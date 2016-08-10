
#include <stdio.h>
#include <stdlib.h>

int sumFibonacci(int fibonacciLimit,int sum,int num1,int num2);

int main()
{
	int fibonacciLimit=4000000;
	int sum=sumFibonacci(fibonacciLimit,0,1,2);
	printf("The sum of the fibonacci numbers up to %d is %d.",fibonacciLimit,sum);
}

int sumFibonacci(int fibonacciLimit,int sum,int num1,int num2)
{
	if(fibonacciLimit<1)
	{
		return 0;
	}
	
	if(num1>fibonacciLimit || num2>fibonacciLimit)
	{
		return sum;
	}
	
	if(num2%2==0)
	{
		sum+=num2;
	}
	
	return sumFibonacci(fibonacciLimit,sum,num2,num1+num2);
}