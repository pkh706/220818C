#include <stdio.h>
int main()
{
	

	int i, n, sum = 0;
	scanf("%d", &n);
	
	 
	for(i=1;i<=1000;i++)
	{
		sum += i;
		if(sum>=n)
		{
			break;
		}
	}
	printf("%d", i);
}
