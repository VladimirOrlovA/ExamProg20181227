#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// ExamProg20181227 var2

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int i, x;
	float b, n;

	printf("������� ����� => ");
	scanf_s("%f", &n);

	for(i=6; n>=1; i--)
	{
		float b = (float) n / pow(2,i);
		x = b;
		n = n - x * pow(2, i);
		
		if (x !=0)	printf(" ���-�� ����� ������������ %.f = %d \n", (pow(2,i)), x);
	
	} 

}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int i=0, sum=0;

	while (sum <= 50)
	{
		
		i++;
				
		if (i % 2 != 0)
		{
			sum = sum + i;
			
			if (sum >= 50) break;
			
			printf("%d \n", i);
						
		}

	} 

	printf("\n ����� ������������� �������� ����� = %d", sum-i);
	

}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int n, i, sum=0;

	for (i = 1; i <= 10; i++)
	{
		n = 600 + rand() % 800;

		printf("%d ����� ����� : %d \n", i, n);

		if (n > 1000)
		{
			sum = sum + n;
		}
		
	}
		printf("����� ������� ���������� >1000�� = %d", sum);
	
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int n, np, j, jp;

	for (j = 1; j <= 5; j++)
	{
		np = 3 + rand() % 13;

	}

}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int ch, klass, sklass, total = 0, sum = 0;

	for (klass = 1; klass <= 11; klass++)
	{
		printf("%d ������� 5 \n", klass);

		for (sklass = 1; sklass <= 5; sklass++)
		{
			ch = 15 + rand() % 7;
			sum = sum + ch;
			printf("%d ������ ����� - ���-�� �������� = %d \n", sklass, sum);
		}
		printf("�� ���� %d ������� �������� = %d \n", klass, sum);

		if (klass % 2 != 0) total = total + sum;
	}

	printf("���-�� �������� 1, 3, 5, 7, 9, 11 ������� ����� = %d", total);
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int i, p, sum85=0, sum90=0;

	for (i = 1; i <= 10; i++)
	{
		p = 1980 + rand() % 20;

		printf("%d ������� �.�. : %d \n", i, p);
		
		if (p <= 1985) sum85 = sum85+1;
		if (p >= 1985) sum90 = sum90+1;

	}

	printf("\n���-�� ����� �� 1985�.�.	: %d \n", sum85);
	printf("���-�� ����� ����� 1990�.�.	: %d \n", sum90);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int team, play, res=0, sum=0, resp=0, p=0, n=0;

	for (team = 1; team <= 5; team++)
	{

		for (play = 1; play <= 10; play++)
		{
			res = 0 + rand() % 2;

			if (res != 0) p = p + 1;
			if (res == 0) n = n + 1;
						
		}
		printf("\n������� %d \n", team);
		printf("- ���-�� ���������		: %d \n", p);
		printf("- ���-�� ����������		: %d \n", n);

		if (p > n) resp = resp + 1;
	}

	printf("���-�� ������ � ������� ������������ ��������� %d", resp);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (9) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause"); 


}