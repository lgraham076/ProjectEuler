#include <stdio.h>
#include <stdlib.h>

typedef enum {true, false} bool;
long long int *primes=NULL;
long long int numPrimes=0;

long long int* addPrime(long long int prime);
long long int findPrimeSum(long long int limit);

int main()
{
	long long int limit=2000000;
	long long int primeSum=findPrimeSum(limit);
	
	printf("The sum of the primes below %lld is %lld with %lld prime numbers found.",limit,primeSum,numPrimes);
	
	return 0;
}

long long int findPrimeSum(long long int limit)
{
	long long int i,j;
	long long int sum=2;//Add first prime
	addPrime(2);
	bool isPrime;
	for(i=3; i<limit; i++)
	{
		isPrime=true;
		for(j=0; j<numPrimes; j++)
		{
			if(i%primes[j]==0)
			{
				isPrime=false;
				break;
			}
		}
		
		if(isPrime==true)
		{
			addPrime(i);
			sum+=i;
		}
	}
	
	return sum;
}

long long int* addPrime(long long int prime)
{
	if(primes==NULL)
	{
		numPrimes++;
		primes=malloc(numPrimes*sizeof(long long int));
		primes[0]=prime;
	}
	else
	{
		numPrimes++;
		primes=realloc(primes,numPrimes*sizeof(long long int));
		primes[numPrimes-1]=prime;
	}
	
	return primes;
}
