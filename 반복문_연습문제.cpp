#include <stdio.h>
#include <stdlib.h>
#include <time.h>

exam1()
{
	int n = 1, sum = 0;
	
	while (1)
	{
		sum += n;
		if(sum >= 100) break;
		n++;
	}
	printf("sum = %d\n, n = %d\n", sum, n);
} 

exam2(){
	int n, count = 0, sum = 0;
	
	do
	{
		scanf("%d", &n);
		if(n<1)
			continue;
		sum = sum+n;
		count++;
	} while(count<5);
	
	printf("��:%d\n", sum);
} 

exam3(){
	int n, a;
	
	printf("4�ڸ��� �Է� : ");
	scanf("%d", &n);
	
	do{
		a = n%10; 
		printf("%d", a);
		n = n/10;
	} while(n>0);
} 

exam4(){
	int n, a1 = 0, a2 = 1, a3, i;
	printf("�� ��° �ױ��� ���ұ��?");
	scanf("%d", &n);
	for( i =1; i <=10; i ++)
	{
		printf("%d", a1);
		a3 = a1 + a2;
		
		a1 = a2;
		a2 = a3;
	 } 
} 

exam5(){
	int answer, cnt, guess;
	srand(time(NULL));
	answer = rand()%100+1;
	
	do
	{
		printf("1���� 100���� ���ڸ� ���纸����>>");
		scanf("%d", &guess);
		if(guess>answer)
			printf("������ ���ڰ� �����ϴ�\n");
			
		else if(guess<answer)
			printf("������ ���ڰ� �����ϴ�\n");
	}while(guess!=answer);
	
	printf("�����մϴ�! ������ %d�̰�, �õ�Ƚ�� = %d\n", answer, cnt);
} 
	
exam6(){
		int a, b, temp, i;
		printf("�μ� ������ ���� �������� ��� \n");
		scanf("%d %d", &a, &b);
		if(a>b){
			temp = a;
			a=b;
			b=temp;
		}
		for(i =a; i<=b; i++)
			printf("%d", i);
	}
	
exam7(){
		int i;
		for(i=1; i<=25;i++){
			printf("%3d", i);
			if(i%5==0) printf("\n");
		}
		
	}
	
	
exam8(){
		int num;
		while(1)
		{
			printf("�����Է� : ");
			scanf("%d", &num);
			if(num<0)break;
			if(num==0)continue;
			if(num%2==0)
				printf("¦��\n");
			else
				printf("Ȧ��\n");
		}
		
	}
	
	
exam9(){
		int i, j ;
		for(i=1; i<=5; i++)
		{
			for(j=1; j<i; j++)
			{
				printf("0");
			}
			printf("*\n");
		}
	}
	
	
exam10(){
		int i=1,j;
		
		while(i<=5)
		{
			j=1;
			while(j<i)
			{
				printf("0");
				j++;
			}
			printf("*\n");
			i++;
		}
		
	}

main(){
	int no;
	
	while(1){
		printf("\n������ȣ:");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
		}
	}
}

