#include <stdio.h>

void exam15(){

}

void exam16()
{
	int a[2][3]={{100, 90, 80}, {70, 60, 50}};
	int i, j;
	
	for(i=0; i<=1; i++)
	{
		for(j=0; j<2; j++)
			printf("%3d", a[i][j]);
			printf("\n");
	}
}

void exam17(){
	int a[4][2];
	
	int i, j;
	int tot;
	double avg;
	
	for(i=0; i<=3; i++)
	{
		printf("%d�� �л��� ����, C��� ���� �Է� : ", i);
		for(j=0; j<=1; j++)
		{
			scanf("%d", &a[i][j]);
		}
		for(i=0; i<=3; i++)
		{
			tot = 0;
			for(j=0; j<=1; j++)
				tot = tot + a [i][j];
			avg = tot/2.0;
			printf("%d�� �л��� ",i+1);
			printf("���� : %3d, ��� : %2.1f\n", tot, avg);
		}
	}
}

void exam18(){
	char city[][10] = {
	{'c', 'a', 't', '\0'},
	{'h', 'o', 'r', 's', 'e', '\0'},
	{'d', 'o', 'g', '\0'},
	{'t', 'i', 'g', 'e', 'r', '\0'}
	};
	
	char ani1[][10] = {"cat", "horse", "dog", "tiger"};
	int i, j;
	
	for(i=0; i<4; i++){
		printf("%s\n", ani1[i][j]);
	}
		
	
	printf("\n");
	for(i=0; i<4; i++)
		printf("%s", ani1[i]);
}

void exam19(){
	int arr[5];
	int max, min, i;
	for(){
		printf("�Է�: ");
		scanf("%d", ); 
	}
	max = 
	for()
	{
		if(max<arr[i]) max=
		if() min = arr[i];	
	}
	printf("�ִ밪: %d\n", );
	printf("�ּ� ��: %d\n", );
}

void exam20(){
	int , sum = 0, i;
	float 
	fot(i=0; i<5; i++)
	{
		printf("%d���� ���� : ", i=1);
		scanf();
		sum = 
	}
	
	printf("\n������ %d���̸�, ����� ���Դϴ�.", sum, avg);
}

void exam1(){
	int i, n;
	int a[10] = {65, 45, 73, 5,82,25,3,34,12,20};
	printf("�˻��� ������ : ");
	scanf("%d", &n);
	
	for(i=0; i<0; i++){
		if(n == a[i]){
			printf("%d�� a[%d]�� �ֽ��ϴ�.\n ", n, i);
			break;
		}
	}
	if(i==10)
		printf("%d�� ã�� �� �����ϴ�.\n", n);
}

void exam2(){
		int arr[4][5]
		int i, j, cnt = 1;
		for(i=0; i<=3; j++){
			for(j=0; j<=4; j++)
			{
				arr[i][j] = cnt++;
			}
		}
		for (i=0; i<4; i++)
		{
			for(j=0; j<5; j++)
			{
				printf("%5d", arr[i][j]);
			}
			printf("\n");
		}
}



main(){
	int num;
	while(1){
    	printf("\n������ȣ: ");
		scanf("%d", &num);
		printf("%d������===============\n", num);
		switch(num){
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
			case 19: exam19(); break;
			case 20: exam20(); break;
			case 1: exam1(); break;
			case 2: exam2(); break;
		
            default: return 0 ;
		}
	}
}
