#include "Stack.h"

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream myFile;
	myFile.open("Text.txt"); //Открытие файла для считывания

	if (myFile.is_open()) {
		string str;
		while (!myFile.eof()) {
			getline(myFile, str);
			cout << "\nФормула: " << str << endl;
			Task(str);
		}
	}
	//myFile.get(ch);  //Посимвольное считывание из файла 
					   //Если нужно считывать по словам (т.е. до пробела), то исп-ем myFile >> str где str -- строка типа string (ну либо массив char)
					   //А если нужно считывать целиком строку из файла, то используем std-метод(не от класса ifstream!!!): getline(fmyFile, str), где str - строка тика стринг
					   //Существует и метод класса ifstream -- myFile.getline(str, 50), но тут str -- ОБЯЗАТЕЛЬНО char-массив и необходимо передавать число символов, сколько мы хотим считать из файла
	else {
		cout << "\nНе удалось открыть файл\n";
		return -1;
	}
	myFile.close();
	return 0;
}