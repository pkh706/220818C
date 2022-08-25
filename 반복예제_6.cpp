#include <stdio.h>

main()
{
	printf("예제 10 ------- \n");
	
	int i = 10;
	do{
		printf("%d", i);
		i--;
	} while (i>=5); 
	
	printf("\n예제 11 --------");
	
	i = 0 ;
	int n ;
	printf("정수입력 : ");
	scanf("%d", &n);
	do{
		printf("i love programmimg\n");
		
	} while(i<=0);
	
	printf("\n예제 14 ----------------");
	int sum = 0;
	do{
		printf("숫자 입력 : ");
		scanf("%d", &n);
		sum = sum + n;
	} while (n!=0);
	printf("합 : %d", sum);
}
