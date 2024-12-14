#include <iostream>
#include <algorithm>
#include <vector>
#include  <cstdarg>

using namespace std;

//№1
//Напишіть програму, яка обмежує кількість викликів певної функції.Якщо кількість викликів перевищує ліміт, функція повинна повідомити про це.
//Використовувати статично локальну змінну у функції.Приклад:
//
//Тест функції з лімітом 3 :
//	Виклик №1 : Функція виконана успішно.
//	Виклик №2 : Функція виконана успішно.
//	Виклик №3 : Функція виконана успішно.
//	Перевищено ліміт викликів!
//
//	Скидання лічильника : Лічильник скинуто.
//
//	Повторний тест після скидання :
//Тест функції з лімітом 3 :
//	Виклик №1 : Функція виконана успішно.
//	Виклик №2 : Функція виконана успішно.
//

//void limFunc(int reset = 0)
//{
//	static int Count = 0;
//	int lim = 3;
//	if (reset == 0)
//	{
//		if (Count < lim)
//		{
//			Count++;
//			cout << "Viklik " << Count << " Funkcii" << endl;
//		}
//		else
//		{
//			cout << "Perevisheno limit vizovov!" << endl;
//		}
//	}
//	else if (reset == 1)
//	{
//		Count = 0;
//		cout << "Sbros schetchika - USPESHNO." << endl;
//	}
//
//}
//
//int main()
//{
//	limFunc();
//	limFunc();
//	limFunc();
//	limFunc();
//
//	limFunc(1);
//
//	limFunc();
//	limFunc();
//	limFunc();
//	limFunc();
//}


//	№2
//	Написати шаблонні функції і протестувати їх в основній програмі :
//■ Знаходження максимального значення в одновимірному масиві;
//■ Знаходження максимального значення у двовимірному масиві;
//


//template <typename a, typename b>
//
//a func1(a arr[], b size)
//{
//	b max = 0;
//
//	for (b i = 0; i < size; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	return max;
//}
//
//template <typename a, typename b>
//a func2(a arr[], b size1)
//{
//	b max = 0;
//
//	for (b i = 0; i < size1; i++)
//	{
//		
//		if (max < arr[i])
//			max = arr[i];
//		
//	}
//	
//	return max;
//}
//
//int main()
//{
//	srand(time(NULL));
//	const int size = 2, size2 = 5;
//	int arr[size];
//	int arr2[size][size2];
//
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = 1 + rand() % 10;
//		cout << arr[i] << ' ';
//	}
//
//	int max = func1(arr, size);
//	cout << endl << max << endl;
//
//	int arr3[size * size2];
//	int counter = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size2; j++)
//		{
//			arr2[i][j] = 1 + rand() % 10;
//			cout << arr2[i][j] << ' ';
//			
//			arr3[counter] = arr2[i][j];
//			counter++;
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	for (int i = 0; i < size * size2; i++)
//	{
//		cout << arr3[i] << ' ';
//	}
//
//	int max2 = func2(arr3, size * size2);
//	cout << endl << max2 << endl;
//}




//№3
//Реалізуйте перевантажені функції для
//■ Знаходження максимального значення двох цілих;
//■ Знаходження максимального значення трьох цілих

//int max(int a, int b)
//{
//    int maxN = 0;
//
//    if (a > b)
//    {
//        maxN = a;
//    }
//    else
//    {
//        maxN = b;
//    }
//
//    return maxN;
//}
//
//int max(int a, int b, int c)
//{
//    int s = 0;
//    if (a > b && a > c)
//        s = a;
//    else if ((b > a && b > c))
//        s = b;
//    else
//        s = c;
//    return s; // Використання першої функції
//}
//
//int main()
//{
//    int max2 = max(2, 5);
//    int max3 = max(2, 3, 4);
//    cout << max2 << ' ' << max3 << endl;
//
//
//    
//}

//№4
//Напишіть рекурсивну функцію, яка приймає одновимірний масив зі 100 цілих чисел,
//заповнених випадковим чином, і знаходить позицію, з якої починається послідовність з 10 чисел, сума яких мінімальна.
//Вивести масив у вигляды таблиці(10х10)
//int sum(int arr[], int size, int startInd, int minSumma, int minIndex)
//{
//	if (startInd > size - 10)
//		return minIndex;
//
//	int currentSum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		currentSum += arr[startInd + i];
//	}
//
//	if (currentSum < minSumma)
//	{
//		minSumma = currentSum;
//		minIndex = startInd;
//	}
//
//	return sum(arr, size, startInd + 1, minSumma, minIndex);
//	
//}
//
//int main()
//{
//	srand(time(NULL));
//	const int size = 100;
//	int arr[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 10;
//		cout << arr[i] << ' ';
//		if ((i + 1) % 10 == 0)
//		{
//			cout << endl;
//		}
//	}
//
//	int minSum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		minSum += arr[i];
//	}
//
//	int resultIndex = sum(arr, size, 0, minSum, 0);
//
//	cout << "\nMin Summa: ";
//	int minSum1 = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		minSum1 += arr[resultIndex + i];
//	}
//	cout << minSum1 << endl;
//	cout << "Start Index: " << resultIndex << endl;
//
//
//}


//№5
//Створіть функцію з необмеженою кількістю параметрів для об'єднання масивів у один. 

vector <int> Union(int countArr, ...)
{
	vector<int> result;
	
	va_list arg;
	va_start(arg, countArr);

	for (int i = 0; i < countArr; i++)
	{
		vector<int> currentArray = va_arg(arg, vector<int>);
		result.insert(result.end(), currentArray.begin(), currentArray.end());
	}

	va_end(arg);

	return result;
}

int main()
{ 
	srand(time(NULL));

	vector<int> arr1 = { 1, 2, 3 };
	vector<int> arr2 = { 4, 5, 6 };
	vector<int> arr3 = { 7, 8, 9 };

	vector<int> allArr = Union(3, arr1, arr2, arr3);

	for (int i : allArr)
	{
		cout << i << ' ';
	}

}


