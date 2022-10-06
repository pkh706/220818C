#include <stdio.h>
#include <stdlib.h>
#include <time.h>

exam1(){
	int i, j ;
	for(i=1; i<=5; ++i)
	{
		for(j=1; j<=i; ++j)
			printf("*");
		printf("\n");
	}
	for(i=4; i>=1; --i)
	{
		for(j=1; j<=i; ++j)
			printf("*");
		printf("\n");
	}
} 

exam2(){
	int n, a;
	
	printf("4자리수 입력 : ");
	scanf("%d", &n);
	
	do{
		a=(n%10);
		printf("%d", a);
		n=n/10;
	} while (n>0);
} 

exam3(){
	int n, a1 = 0, a2 = 1, a3, i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d", a1);
		a3 = a1+a2;
		
		a1 = a2;
		a2 = a3;
	 } 
} 

exam4(){ 
	int a, b, temp, i;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;	
	}
	for(i=a; i<=b; i++)
		printf("%d", i);
}

exam5(){
	int n, a;
	
	printf("4자리수 입력 : ");
	scanf("%d", &n);
	
	do{
		a=(n%10);
		printf("%d", a);
		n=n/10;
		
	}while(n>0);
} 

exam6(){
	int n, a1 = 0, a2 = 1, a3, i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &n);
	for(i=1;i<=n; i++)
	{
		printf("%d", a1);
		a3 = a1+a2;
		
		a1 = a2;
		a2 = a3;
	 } 
} 


exam7(){

} 

exam8(){

} 

exam9(){ 

} 

exam10(){

} 






main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
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

