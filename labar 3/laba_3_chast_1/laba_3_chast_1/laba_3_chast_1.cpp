/*1. Скопировать из файла FILE1 в файл FILE2 все строки, которые содержат только одно слово. Найти слово, содержащее 5 символов, в  файле FILE2.*/
#include <iostream>
#include <fstream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	//Первый файл 
	string peremen_1 = "FILI1.txt"; 
	ofstream file_nomer_1;//создание файла 
	file_nomer_1.open(peremen_1);// открытие файла
	
	if (!file_nomer_1.is_open()) {
		cout << "Не удается открыть файл!";
	}
	else {
		file_nomer_1 << "Stroka Times\nMyname\ntyt\nMinsk";
	}
	file_nomer_1.close();
	// Окочане первого файла

	// Создание вспомогаетльного файла
	string peremen_2 = "FILE_2.txt";
	ofstream file_nomer_2;//создание файла 
	file_nomer_2.open(peremen_2);// открытие файла

	if (!file_nomer_2.is_open()) {
		cout << "Не удается открыть вспомогательный  файл!";
	}
	
	// Окончание создания вспомогательного файла 
	ifstream fin_1;
	fin_1.open(peremen_1);
	if(!fin_1.is_open()){
		cout << "Не удалось открыть файл fin_1";
	}
	else {
		char buf_1;
		int schet = 0;
		string str_1; 
		while (fin_1.get(buf_1)) {
			
			if (buf_1 == ' ') {
				schet = schet + 1;
			}
			if (buf_1 == '\n' && schet == 0) {
				fin_1 >> str_1;
				file_nomer_2 << str_1<< " ";
			}
			else {
				schet = 0;
			}

		
		}
		
	}
	fin_1.close();
	file_nomer_2.close();
	ifstream fin_2;
	fin_2.open(peremen_2);
	if (!fin_2.is_open()) {
		cout << "Не удалось открыть файл fin_2";
	}
	else {
		setlocale(LC_ALL, "rus");
		char buf_2;
		int schet_2 = 0;
		string str_nomer;
		while (fin_2.get(buf_2)) {
			fin_2 >> str_nomer;// cout str_nomer
			schet_2 = schet_2 + 1;
			
			if (buf_2 == ' ') {
				if (schet_2  == 3) cout << "Слово из 5 букв " <<   str_nomer ;
				
			}
			


		}
	}

	
	fin_2.close();
}

