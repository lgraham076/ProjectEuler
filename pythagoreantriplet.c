#include <stdlib.h>
#include <stdio.h>

typedef enum {true,false} bool;

int main()
{
	int m,n,i;
	int a=0;
	int b=0;
	int c=0;
	int a2=1;
	int b2=1;
	int c2=1;
	int pytSum=1000;
	bool sumFound=false;
	for(m=1,n=2; (a+b+c) <= pytSum; m++,n++)
	{
		a=n*n-m*m;
		b=2*m*n;
		c=n*n+m*m;
		printf("a=%d,b=%d,c=%d\n",a,b,c);
		for(i=1; (a2+b2+c2) <= pytSum; i++)
		{
			a2=a*i;
			b2=b*i;
			c2=c*i;
			
			
			if((a2+b2+c2)==pytSum)
			{
				sumFound=true;
				printf("The %d,%d,%d pythagorean theorem equals %d, the product is %lld",a2,b2,c2,pytSum,a2*b2*c2);
				break;
			}
		}
		
		if(sumFound==true)
		{
			printf("Found sum!\n");
			break;
		}		
	}

	return 0;
}