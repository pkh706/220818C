#include <stdio.h>
main()
{
	int SIZE = 5;
	 
	int score[SIZE];
	int i, min = 0;
	for(i=0; i<SIZE; i++)
	{
		printf("%�� �л��� ���α׷��� ������ �Է� : ", i+1);
		scanf("%d", &score[i]);
	}
	for(i=0; i<SIZE; i++)
		if(score[i]<min)
			min = score[i];
			
	printf("�������� : %d\n", min);
		
}
