#include <stdio.h>
main()
{
	int i = 1, n, sum = 0;
	int start;
	
	printf("���� ���� ù��°  �� �Է� : ");
	scanf("%d", &i);
	start = i;
	
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum = sum + i;
		i++;
	 } 
	 printf("%d���� %d������ ���� %d�Դϴ�\n", i ,  n, sum);
	 
	 
}
