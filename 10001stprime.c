#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {false,true} bool;

int* findNthPrime(int nth);

int main()
{
	int nth=10001;
	int *primes=findNthPrime(nth);
	printf("The %dth prime is %d",nth,primes[nth-1]);
	return 0;
}

int* findNthPrime(int nth)
{
	bool numberIsPrime=false;
	int *primes=malloc(nth*sizeof(int));
	primes[0]=2;//Adding first prime number
	int numberPrimesFound=1;
	int count=3;
	int i;
	while(numberPrimesFound!=nth)
	{
		numberIsPrime=true;
		for(i=0; i<numberPrimesFound; i++)
		{
			if(count%primes[i]==0)
			{
				numberIsPrime=false;
				break;
			}
		}
		if(numberIsPrime==true)
		{
			primes[numberPrimesFound]=count;
			numberPrimesFound++;
		}
		
		count++;
	}
	
	return primes;
}