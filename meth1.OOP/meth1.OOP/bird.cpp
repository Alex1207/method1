#include "stdafx.h"
#include "bird.h"
#include <string>
#include "iostream"
#include <fstream>

using namespace std;

void bird::In(ifstream &f1)
{
	f1 >> migration; 
}
void bird::Out(ofstream &f2)
{
	cout << " - ��� ������, ������� ";
	f2 << " - ��� ������, ������� ";
	if(migration)
	{
		cout << "���������\n";
		f2 << "���������\n";
	}
	else 
	{
		cout << "�� ���������\n";
		f2 << "�� ���������\n";
	}
}