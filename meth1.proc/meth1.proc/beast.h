#include "stdafx.h"
#include "iostream"
#include <fstream>
#include "qwe.h"

using namespace std;
struct beast
{
	//string name;
	int Group;//�������������, ����������, �������, ��������
};
void InBeast(beast **Beast, ifstream &f1);
void OutBeast(beast *Beast, ofstream &f2);