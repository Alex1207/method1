#include "stdafx.h"
#include "bird.h"
#include <string>
#include "iostream"
#include <fstream>

using namespace std;

void InBird(bird **Bird, ifstream &f1)
{
	bird* B = new bird;
	int M = 0;
	f1 >> B->migration;
	//f1 >> B->name;
	*Bird = B;
}
void OutBird(bird *Bird, ofstream &f2)
{
	cout << " - ��� ������, ������� ";  
	f2 << " - ��� ������, ������� "; 
	if(Bird->migration)
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