#include <stdio.h>

main()
{
	printf("���� 10 ------- \n");
	
	int i = 10;
	do{
		printf("%d", i);
		i--;
	} while (i>=5); 
	
	printf("\n���� 11 --------");
	
	i = 0 ;
	int n ;
	printf("�����Է� : ");
	scanf("%d", &n);
	do{
		printf("i love programmimg\n");
		
	} while(i<=0);
	
	printf("\n���� 14 ----------------");
	int sum = 0;
	do{
		printf("���� �Է� : ");
		scanf("%d", &n);
		sum = sum + n;
	} while (n!=0);
	printf("�� : %d", sum);
}
