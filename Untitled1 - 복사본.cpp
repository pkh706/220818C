#include <stdio.h>
main()
{
	int SIZE = 5;
	 
	int score[SIZE];
	int i, min = 0;
	for(i=0; i<SIZE; i++)
	{
		printf("%번 학생의 프로그래밍 성적을 입력 : ", i+1);
		scanf("%d", &score[i]);
	}
	for(i=0; i<SIZE; i++)
		if(score[i]<min)
			min = score[i];
			
	printf("최저점수 : %d\n", min);
		
}
