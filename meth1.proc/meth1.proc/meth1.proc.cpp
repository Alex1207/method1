// ��������� �� ����� ������ � ������������ �� � ������ ���� � ����� �������� ����(����������� �����)
//+�������� ����� ����� "�����"

#include "stdafx.h"
#include <Windows.h>
#include "iostream"
#include <fstream>
#include <string>
#include <clocale>
#include "container.h"
using namespace std;

enum place {river, lake, sea, ocean, pond, aquarium};

int _tmain(int argc, _TCHAR* argv[])
{	
	int n = 10;
	setlocale(LC_ALL,"rus");
	if (argc!=3) 
	{
		cout << "������� ������������ ���������� ����������!!!\n������� � �������: <���_������������_�����> <���_�������� �����> <���_���������_�����>";
		return 0;
	}
	ifstream f1(argv[1]);
	container mas;
	Init(mas);
	In(mas, f1);
	
	ofstream f2(argv[2]);
	Out(mas, f2);
	Del(mas);
	system("pause");
	return 0;
}

