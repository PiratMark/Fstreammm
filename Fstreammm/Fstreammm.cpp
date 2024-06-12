#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");
	float document,b,c;

	cout << "Выберите документ:";
	cin >> document;
	if (document == 1)
	{
		string path = "Название товара.txt";
		fstream fout;
		fout.open(path, fstream::in | fstream::out | fstream::app);

		if (!fout.is_open())
		{
			cout << "ощибка  открытия файла!" << endl;
		}
		else
		{
			SetConsoleCP(1251);
			string msg;
			for (int i = 0; i < 3; i++)
			{
			cin >> msg;
			fout << msg << "\n";
			}
			
			SetConsoleCP(866);
		}

		fout.close();
	}
	else if (document == 2)
	{
		string path = "Количество.txt";
		fstream fout;
		fout.open(path, fstream::in | fstream::out | fstream::app);

		if (!fout.is_open())
		{
			cout << "ощибка  открытия файла!" << endl;
		}
		else
		{
			SetConsoleCP(1251);
			string msg;
			for (int i = 0; i < 3; i++)
			{
				cin >> msg;
				fout << msg << "\n";
			}

			SetConsoleCP(866);
		}

		fout.close();
	}
	else if (document == 3)
	{
		string path = "Цена.txt";
		fstream fout;
		fout.open(path, fstream::in | fstream::out | fstream::app);

		if (!fout.is_open())
		{
			cout << "ощибка  открытия файла!" << endl;
		}
		else
		{
			SetConsoleCP(1251);
			string msg;
			for (int i = 0; i < 3; i++)
			{
				cin >> msg;
				fout << msg << "\n";
			}

			SetConsoleCP(866);
		}

		fout.close();
	}

	return 0;
}
