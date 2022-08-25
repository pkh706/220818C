#include <stdio.h>

main()
{
	int i=1, dan;
	printf("¸î ´Ü?");
	scanf("%d", &dan);
	
	printf("***%d´Ü***\n", dan); 
	
	while(i<=9)
	{
		printf("%d*%d=%d\n", dan, i, i*dan);
		i++;
	}
}
