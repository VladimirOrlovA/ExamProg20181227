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

	printf("Введите число => ");
	scanf_s("%f", &n);

	for(i=6; n>=1; i--)
	{
		float b = (float) n / pow(2,i);
		x = b;
		n = n - x * pow(2, i);
		
		if (x !=0)	printf(" Кол-во купюр достоинством %.f = %d \n", (pow(2,i)), x);
	
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

	printf("\n Сумма положительных нечетных чисел = %d", sum-i);
	

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

		printf("%d товар стоит : %d \n", i, n);

		if (n > 1000)
		{
			sum = sum + n;
		}
		
	}
		printf("Сумма товаров стоимостью >1000тг = %d", sum);
	
}


void Task4() // делал дома 05.01.2019
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int i, np, mp, sum = 0;

	for (i = 1; i <= 5; i++)
	{
		np = 10 + rand() % 6;
		mp = 10 + rand() % 40;

		printf("%3 %d газета - кол-во страниц %d \n", i, np);
		printf("%3 %d журнал - кол-во страниц %d \n\n", i, mp);

		if (mp > np) sum = sum + mp;

	}

	printf("\n Суммарное кол-во страниц журналов, превышающих газеты по объему страниц = %d \n\n", sum);
}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int ch, klass, sklass, total = 0, sum;

	for (klass = 1; klass <= 11; klass++)
	{
		printf("\n\n%d классов 5 \n\n", klass);

		sum = 0;

		for (sklass = 1; sklass <= 5; sklass++)
		{
			ch = 15 + rand() % 7;
			sum = sum + ch;
			printf("%d первый класс - кол-во учеников = %d \n", sklass, ch);
		}
		printf("\nВо всех %d классах учеников = %d \n", klass, sum);

		if (klass % 2 != 0) total = total + sum;
	}

	printf("\n\n\nКол-во учеников 1, 3, 5, 7, 9, 11 классах школы = %d", total);
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

		printf("%d человек г.р. : %d \n", i, p);
		
		if (p < 1985) sum85 = sum85+1;
		if (p >= 1990) sum90 = sum90+1;

	}

	printf("\nКол-во людей до 1985г.р.	: %d \n", sum85);
	printf("Кол-во людей после 1990г.р.	: %d \n", sum90);
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
		printf("\nКоманда %d \n", team);
		printf("- кол-во выигрышей		: %d \n", p);
		printf("- кол-во проигрышей		: %d \n", n);

		if (p > n) resp = resp + 1;
	}

	printf("Кол-во команд с большим колличеством выигрышей %d", resp);
}


void Task8() // делал дома 05.01.2019
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int st=0, ex1, ex2;

	for (int i = 1; i <= 15; i++)
	{
		ex1 = 2 + rand() % 4; 
		ex2 = 2 + rand() % 4;

		printf("%3 %3.d - студент - оценка за 1 экзамен = %d,  оценка за 2 экзамен = %d \n", i, ex1, ex2);

		if (ex1 == 2 || ex2 == 2) st = st + 1;
	}

	printf("\n\n Кол-во студентов в группе получивших на экзамене \"2\" = %d", st);
}


void Task9() // делал дома 05.01.2019
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int p, w, average = 0, average100 = 0, i = 0, i1 = 0;

	for (p = 1; p <= 10; p++)
	{
		w = 80 + rand() % 40;

		if (w <= 100)
		{
			i++;
			average = average + w;
		}

		if (w > 100)
		{
			i1++;
			average100 = average100 + w;
		}

		printf("%3.d - человек = %3.d кг \n", p, w);
	}

	printf("\n\n Средняя масса людей весом до\t\t 100кг = %.2f", (float) average / i);
	printf("\n\n Средняя масса людей весом свыше\t 100кг = %.2f", (float)average100 / i1);

}


void Task10() // делал дома 06.01.2019
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	float t, bt = 0;

	for (int i = 1; i <= 10; i++)
	{
		t = float(40 + rand() % 20) / (5 + rand() % 10);
		
		printf("%3 Финишировал спортсмен под номером %d время = %4.2f сек \n", i, t);
		
		if (t <= bt || bt==0) bt = t;

		printf("%3 Лучшее время = %4.2f \n\n\n", bt);

	}

}


void Task11() // делал дома 06.01.2019
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask11\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	float bal, minb=0, maxb=0, sum=0;
	int i;

	for (i = 1; i <= 6; i++)
	{
		bal = float(40 + rand() % 20) / (5 + rand() % 10);
		sum = sum + bal;

		if (bal <= minb || minb == 0) minb = bal;
		if (bal >= maxb || maxb == 0) maxb = bal;

		printf("%d - оценка - %2.1f \n", i, bal);
		
	}
		
	printf("\n%3 мин   оценка - %2.1f \n", minb);
	printf("%3 макс  оценка - %2.1f \n", maxb);

	sum = (sum - minb - maxb) / (i-3);

	printf("\n%3 средн оценка - %2.1f \n", sum);

}


void Task12() // делал дома 05.01.2019
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask12\n\n");
	SetConsoleTextAttribute(hConsole, 7);



}



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (12) => ");
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
		case 10: {Task10(); } break;
		case 11: {Task11(); } break;
		case 12: {Task12(); } break;

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