#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	Необходимо отсортировать первые две трети массива в порядке возрастания если среднее арифметическое всех элементов больше нуля;
		иначе - лишь первую треть.остальную часть массива не сортировать а расположить в обратном порядке.*/
		int mas[10];
		
		double sum,mid,term;
		sum = 0;
		mid = 0;
		term = 1;
				
		for (int i = 0; i < 9; i++)
		{
			mas[i]=-9+rand()%18;
			cout << mas[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < 9; i++)
		{
			sum += mas[i];
		}
		mid = sum / 9;
		cout << "Mid. arifm. = " << mid << endl;

		if (mid > 0)
		{
			term = mid*2/3;
			cout << "Term = " << term << endl;
			for (int pass = 1; pass < term-1; pass++)
			{
				
				for (int i = 0;i < term - 1;i++)
				{
					if (mas[i] > mas[i + 1])
					{
						swap(mas[i], mas[i - 1]);
					}
				}
			}
			for (int i = 0;i < term;i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;
		}
		else
		{
			term = 3;//9/3=3 (1-ya tret)
			for (int pass = 0; pass < term; pass++)
			{
				
				for (int i = 0;i < term - 1;i++)
				{
					if (mas[i] > mas[i + 1])
					{
						swap(mas[i], mas[i - 1]);
					}
				}
			}
			for (int i = 0;i < term;i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;
		}

		int remain, dec; 
		remain=9 - (9 - term) / 2;
		for (int i = term, dec = 8; i <remain; i++,dec--)
			swap(mas[i], mas[dec]);

		cout << "Sorted part: ";
		for (int i = 0; i <term; i++)
			cout << mas[i] << " ";
		cout << "Converted part: ";
		for (int i = term; i < 9; i++)
			cout << mas[i] << " ";

		cout << endl << endl;
	}
	
	
	if (task == 2)
	{
		/*2.	Реализовать Сортировку выбором*/
		const int n = 8;
		double a[n] = { 3, 5, 12, 10, 27, 14, 1, 28 };

		int i = 0;
		double min_e;
		int k = 0;


		for (int pass = 0; pass < n - 1; pass++)
		{
			min_e = a[n - 1];

			for (i = pass + 1; i < n; i++)
			{
				if (a[i] <= min_e)
				{
					min_e = a[i];
					k = i;
				}
			}
			if (min_e<a[pass]) swap(a[k], a[pass]);
		}

		for (int i = 0; i < n; i++)
			cout << a[i] << " ";

		cout << endl << endl;



    }

	


}