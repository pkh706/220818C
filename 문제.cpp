#include <stdio.h>

main(){
	int n, count = 0, sum = 0;
	do{
		printf("숫자입력 : ");
		scanf("%d", &n);
		if(n<1)
			continue; 
		sum= sum + n;
	} while( count < 5 );
	
	printf("합계 : %d\n", sum);
}
