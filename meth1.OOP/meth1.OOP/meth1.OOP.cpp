// ��������� �� ����� ������ � ������������ �� � ������ ���� � ����� �������� ����(��������-��������������� �����)
//

#include "stdafx.h"
#include <Windows.h>
#include "iostream"
#include <fstream>
#include <string>
#include <clocale>
#include "container.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{	
	setlocale(LC_ALL,"rus");
	if (argc!=3) 
	{
		cout << "������� ������������ ���������� ����������!!!\n������� � �������: <���_������������_�����> <���_�������� �����> <���_���������_�����>";
		return 0;
	}
	ifstream f1(argv[1]);
	container mas;
	//mas.Init(mas);
	mas.In(f1);
	
	ofstream f2(argv[2]);
	mas.Out(f2);
	mas.Del();
	system("pause");
	return 0;
}

