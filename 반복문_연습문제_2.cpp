#include <stdio.h>

exam1(){
	int n, i, jumsu;
	int max = 0, min = 100;	
	printf("�л����� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("������ �Է��ϼ���(0~100) : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &jumsu);
		if(jumsu>max) max = jumsu;
		else if(jumsu<min) min = jumsu;
	 } 
	 printf("1���� %d��, ����� %d��\n", max, min);
} 

exam2(){
	int i, num = 1;
	for(i=1; ; i++)
	{
		num=num*i;
		if(i>5)
			break;
	}
	printf("%d", num);
} 

exam3(){
	
} 

exam4(){
	
} 

exam5(){
	
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
		}
	}
}

