#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//stringתchar����
	char c[20];
	string s = "12 34���";//����ռ2���ֽڣ���2��char
	//strcpy_s(c, s.c_str());
	strncpy_s(c, s.c_str(), 6);//�����趨����
	cout << c;

	char buf[10];
	string str("ABCDEFG");
	strncpy_s(buf, str.c_str(), 10);//�����趨����

	//�ַ�����ת����string����
	char ch[] = "ABCDEFG";
	string str1;
	str1 = ch;//��ԭ�л�������ӿ�����str += ch;

	/*1.string����תΪCString���ͣ�
		�Ƚ�string���ͱ���ת��Ϊconst char*���ͣ�Ȼ����ֱ�Ӹ�ֵ�Ϳ����ˡ����磺
		CString cstr��
		sring str = ��asdasd����
		cstr = str.c_str();*/

	//string����תΪint���ͣ�
	string stemp = "1234";
	int itemp = atoi(stemp.c_str());

	//sting����תΪdouble���ͣ�
	string stemp = "1234";
	double dtemp = atof(stemp.c_str());

	



	
	

	
	return 0;
}