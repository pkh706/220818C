#include <stdio.h>

void exam9()
{
	char str[10];
	printf("����� �̸��� �����Դϱ�? : ");
	scanf("%s", str);
	printf("�ȳ��ϼ��� %s��\n", str); 
}

void exam10()
{
	int i;
	char str[] = "Good Time";
	for(i=0; i<=9; i++)
		printf("str[%d] = %s\n", i, str[i]);
}

void exam11()
{
	char str[6] = "apple";
	int i = 0;
	
	printf("�� ���ھ� ���\n");
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n\n���ڿ��� �Ѳ����� ���\n");
	printf("%s", str);
}

void exam12()
{
	char a[] = "Seoul Robotics";
	printf("%s\n", a);
	a[5] = '\0';
	printf("%s\n", a);
}

void exam13()
{
	char voca[50];
	int len = 0;
	printf("���ܾ� �Է�: ");
	scanf("%[^\n]s", voca);
	
	while (voca[len]!=NULL)
		len++;
		
	printf("�Է��� ���ܾ��� ���̴� %d\n", len); 
}

void exam14()
{
}

void exam15()
{
}

void exam16()
{
}

main()
{
	int num;
	while (1)
	{
		printf("\n���� ��ȣ: ");
		scanf("%d", &num);
		printf("%d�� ����========================================================================\n", num);
		switch (num)
		{

		case 9:
			exam9();
			break;
		case 10:
			exam10();
			break;
		case 11:
			exam11();
			break;
		case 12:
			exam12();
			break;
		case 13:
			exam13();
			break;
		case 14:
			exam14();
			break;
		case 15:
			exam15();
			break;
		case 16:
			exam16();
			break;
		default:
			return 0;
		}
	}
}
