/*2. Ввести с клавиатуры строку символов, состоящую из цифр и слов, разделенных пробелами, и записать ее в файл.
Прочитать из файла данные и вывести на экран номер слова, 
содержащего k-й по счету с начала символ. Если в k-й позиции пробел, то вывести номер предыдущего слова. */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string vvod;
	//Первый файл 
	string peremen_1 = "FILI1.txt";
	ofstream file_nomer_1;//создание файла 
	file_nomer_1.open(peremen_1);// открытие файла
	string string_1;
	if (!file_nomer_1.is_open()) {
		cout << "Не удается открыть файл!";
	}
	else {
		cout << "Введите строку " << endl;
		for (int i = 0; i < 2; i++) {
			cin >> string_1;
			file_nomer_1 << string_1 << ' ';
		}
		
	}
	file_nomer_1.close();
	//Чтение файла
	ifstream fin_1;
	fin_1.open(peremen_1);
	if (!fin_1.is_open()) {
		cout << "Не удалось открыть файл fin_1";
	}
	else {
		string dost_string;
		int break_ = 0;
		int a = 0;
		int b = 0;
		int dlina_stroki = 0;
		int k_nomer;
		cout << "Введите номер ";
		cin >> k_nomer;
		{
			while (!fin_1.eof()) {
				a = a + 1;
				fin_1 >> dost_string;
				dlina_stroki = dost_string.size();
				b = b + dlina_stroki;
				if (break_ == 0) {
					if (b == k_nomer || b > k_nomer) {
						cout << "Номер слова " << a;
						break_ = +1;
					}
				}
			}
		}
	
	}
	fin_1.close();
	

}
