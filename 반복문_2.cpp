#include <stdio.h>

main(){
	int num, i = 1;
	printf("����� ���� �� : ");
	scanf("%d", &num) ;
	
	while (i<=num){
		if(num % 1 == 0)
			printf("%d", i);
			i++;
	}
}
