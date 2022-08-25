#include <stdio.h>

main()
{
	printf("1~100까지의 홀수의 합");
	int i=1, sum = 0;
	while(1) {
		sum = sum + 1 ;
		i = i + 2;
		if(i>100)
			break;
	}
	printf("1~100까지의 홀수의 합 = %d ", sum);
	
}
