#include <stdio.h>
#include <stdlib.h>

int findSumSquareDifference(int limit);

int main()
{
	int limit=100;
	int difference=findSumSquareDifference(limit);
	printf("The difference between the sum of squares and the square of the sum is %d for the first %d numbers.",difference,limit);
	return 0;
}
//Find the difference between the sum of the squares and the square of the sum
int findSumSquareDifference(int limit)
{

	int i;
	int sumSquare=0;//Sum of all numbers up to limit squared
	int squareSum=0;//Square of the sum of all numbers up to limit
	for(i=1;i<=limit;i++)
	{
		sumSquare+=i*i;
		squareSum+=i;
	}
	squareSum*=squareSum;
	
	return squareSum-sumSquare;
}