#include "Stack.h"

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream myFile;
	myFile.open("Text.txt"); //�������� ����� ��� ����������

	if (myFile.is_open()) {
		string str;
		while (!myFile.eof()) {
			getline(myFile, str);
			cout << "\n�������: " << str << endl;
			Task(str);
		}
	}
	//myFile.get(ch);  //������������ ���������� �� ����� 
					   //���� ����� ��������� �� ������ (�.�. �� �������), �� ���-�� myFile >> str ��� str -- ������ ���� string (�� ���� ������ char)
					   //� ���� ����� ��������� ������� ������ �� �����, �� ���������� std-�����(�� �� ������ ifstream!!!): getline(fmyFile, str), ��� str - ������ ���� ������
					   //���������� � ����� ������ ifstream -- myFile.getline(str, 50), �� ��� str -- ����������� char-������ � ���������� ���������� ����� ��������, ������� �� ����� ������� �� �����
	else {
		cout << "\n�� ������� ������� ����\n";
		return -1;
	}
	myFile.close();
	return 0;
}