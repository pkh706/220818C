#include <stdio.h>

exam1(){
	int num = 0;
	while(1)
	{
		num++;
		printf("%d\n", num);
		if(num==5)
			break;
	 }
} 

exam2(){
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("Be happy~\n");
		}
	}
} 

exam3(){
	int i;
	for(i=0; i<10; i++)
	{
		if (i%3==0)
			continue;
		printf("%d", i);
	}
} 

exam4(){
	int i = 0;
	while(i<20)
	{
		i++;
		if(i%2 !=0) continue;
		
		printf("%d\n", i);
		
	}
} 

exam5(){
	int n, count = 0, sum = 0;
	
	do
	{
		scanf("%d", &n);
		sum+=n;
		if(n<0) continue;
		count++;
	} 
} 


exam6(){
	int i, n, sum = 0;
	
	for(i=1;i<=1000;i++){
		sum = sum + i;
		if(sum>=n){
			printf("%d", i);
			break;
		}
	}
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
		}
	}
}

