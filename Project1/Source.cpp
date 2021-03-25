#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>
using namespace std;

int main() {
 time_t start, end;
 time(&start);

	setlocale(LC_CTYPE, "Russian");
	cout << "Программа преднозначина для нахождения наибольшего из отрицательных элементов" << endl; cout << "Петрунина Арина группа 219/4" << endl; cout << "Вариант 16" << endl;
	int x, i, j = -9999999999999;
	cout << "Введите размер массива" << endl;
	cin >> x;
	int* arr = new int[x];
	for (int i = 0; i < x; i++)
	{
		cout << "Введите " << i << " элемент массива:";
		cin >> arr[i];
		cin.sync();
		{if ((arr[i] < 0) and (arr[i] > j))
			j = arr[i];
		}
	}
	cout << "Наибольшее из отрицательных элементов: " << j << endl;
    
	time(&end);
    double seconds = difftime(end, start);
	printf("The time: %f seconds\n", seconds);
}