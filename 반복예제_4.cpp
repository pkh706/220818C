#include <stdio.h>

main()
{
	int i=1, dan;
	printf("�� ��?");
	scanf("%d", &dan);
	
	printf("***%d��***\n", dan); 
	
	while(i<=9)
	{
		printf("%d*%d=%d\n", dan, i, i*dan);
		i++;
	}
}
