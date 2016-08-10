#include <stdio.h>

int main()
{
	int i;
	int sum=0;
	for(i=1; i<1000; i++)
	{
		if(i%3==0)
		{
			sum+=i;
			continue;
		}
		else if(i%5==0)
		{
			sum+=i;
			continue;
		}
	}
	
	printf("%d",sum);
	
	return 0;
}