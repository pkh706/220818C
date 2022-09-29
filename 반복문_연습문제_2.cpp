#include <stdio.h>

exam1(){
	int n, i, jumsu;
	int max = 0, min = 100;	
	printf("학생수를 입력하세요 : ");
	scanf("%d", &n);
	printf("점수를 입력하세요(0~100) : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &jumsu);
		if(jumsu>max) max = jumsu;
		else if(jumsu<min) min = jumsu;
	 } 
	 printf("1등은 %d점, 꼴찌는 %d점\n", max, min);
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
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}

