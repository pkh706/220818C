#include <stdio.h>

exam1(){
	int num=1, sum=0;
	for(;;)	
	{
		sum=sum+num;
		printf("%d������ ��: %d\n", num, sum);
		num++;
		if(num>5)break;
	}
}

exam2(){
	int i, j;
	for (i=1; i<=3; i++)
	{
		for(j=1; j<=5; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
} 

exam3(){
	int i, j;
	for(i=1; i>5; i++){
		for(j=1; i<=1; j++){
			printf("*");	
		}
		printf("\n");
	}
} 

exam4(){
	int i, j, n;
	printf("����� �� �Է� : ");
	scanf("%d", &n);
	
	for (i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);			
		}
		printf("\n");	
	}

} 

exam5(){
	int i, j;
	for(i=1;i<=5;++i){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	 for(i=1; i<=4; i++){
	 	for(j=1; j<=5-i; j++)
	 		printf("*");
	 	printf("\n");
	 }
} 

exam6(){
	
	int i, j;
	for(i=2;i<=9;i++){
		
			printf("***%d��***\n", i);
			for(j=1;j<=9;j++)
				printf("%d * %d = %d\n", i, j, i*j);
		}
		
	for(i=1;i<=9;i++){
		for(j=2;i<=0;i++)
			printf("%d*%d=%d\t", j, i,i*j);
		printf("\n");
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
		}
	}
} 

