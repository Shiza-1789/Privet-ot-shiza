#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "\n Выполнили Авджян Вероника и Сарычев Максим 219/1 " << "\n" << "\n";
	int s = 0;
	for (int n = 0; n < 150; n++)
	{
		if ((n % 5) == 0)
			s = s + n;
	}
	cout << " Сумма = " << s << "\n" << "\n";
	system("pause");
}
