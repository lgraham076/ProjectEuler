#include <stdio.h>
#include <stdlib.h>


typedef enum {true, false} bool;
long long int *primes=NULL;
long long int numPrimes=0;

long long int largestPrimeFactor(long long int number);
long long int* addPrime(long long int prime);

int main(int argc, char * argv[])
{
	long long int number=600851475143L;
	//long long int number=13195L;
	long long int largestPrime=largestPrimeFactor(number);
	printf("The largest prime factor of %lld is %lld",number,largestPrime);
	free(primes);

	return 0;
}

long long int largestPrimeFactor(long long int number)
{
	long long int i,j;
	long long int largestPrime=0;
	bool isPrime;
	for(i=2; i*i<=number; i++)
	{
		bool isPrime=true;
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
			if(number%i==0)
			{
				largestPrime=i;
			}
		}
	}
	
	return largestPrime;
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