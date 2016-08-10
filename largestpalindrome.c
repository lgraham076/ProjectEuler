/* largestpalindrome.c
 *
 * Finds largest palindrome of n digit numbers
 */
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef enum {false,true} bool;

int* getDigits(int number);
int isPalindrome(int number);

int main()
{
	bool palindromeFound=false;
	int sum,isPal,prod1,prod2;
	int largestPalindrome=0;
	largestPalindrome=0;
	int i=999;
	int j=999;
	
	for(i=999; i > 99; i--)
	{
		int j;
		for(j=999; j > 99; j--)
		{
			sum=i*j;
			if(sum >= largestPalindrome)
			{
				isPal=isPalindrome(sum);
				if(isPal==1)
				{
					largestPalindrome=sum;
					prod1=i;
					prod2=j;
				}
			}
		}
	}
	
	printf("Largest palindrome is %d which is the product of %d and %d",largestPalindrome,prod1,prod2);
	
	return 0;
}

int* getDigits(int number)
{
	int numDigits=log10(number)+1;
	int i;
	int *indivDigits=malloc(numDigits*sizeof(int));
	for(i=0; i < numDigits; i++)
	{
		indivDigits[i]=number%10;
		number=number/10;
	}

	return indivDigits;
}

int isPalindrome(int number)
{
	int *indivDigits=getDigits(number);
	int numElements=log10(number)+1;
	int i=0;
	int j=numElements-1;
	for(i; i < numElements/2; i++)
	{
		if(indivDigits[i]!=indivDigits[j])
		{
			return 0;
		}
		j--;
	}
	return 1;
}