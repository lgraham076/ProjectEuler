#include <stdio.h>

typedef enum{true,false} bool;

int main()
{
	unsigned long smallestMult=0;
	unsigned long multiple=20;
	int i,begin,end;
	begin=2;
	end=20;
	bool multFound=false;
	
	while(multFound==false)
	{
		multiple++;
		
		for(i=begin;i<=end;i++)
		{
			if(multiple%i!=0)
			{
				break;
			}
			
			if(i==end)
			{
				multFound=true;
			}
		}
	}
	
	smallestMult=multiple;
	
	printf("Smallest Multiple: %lu",smallestMult);
	
	return 0;
}