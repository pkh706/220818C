#include <stdio.h>

main()
{
	printf("1~100������ Ȧ���� ��");
	int i=1, sum = 0;
	while(1) {
		sum = sum + 1 ;
		i = i + 2;
		if(i>100)
			break;
	}
	printf("1~100������ Ȧ���� �� = %d ", sum);
	
}
