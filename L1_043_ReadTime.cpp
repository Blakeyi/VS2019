#include <map>
#include <iostream>
#include <string>
#include<stdio.h>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	map<int, int>m;
	map<int, int>m1;
	ifstream f("ReadTime.txt");
	int day; char day1[20];
	f.getline(day1,20);
	sscanf_s(day1,"%d", &day);

	int book, bookSum = 0, bookTime = 0;
	int bookflag = 0;
	char c;
	vector<string> vec;
	char h[3], m2[3];
	for (int i = 0; i < day; i++)
	{
		while (1)
		{
			string str1;
			char c1[20];
			//f >> book >> c;
			//getline(f, h, ':');
			getline(f, str1);
			strcpy_s(c1, str1.c_str());
			sscanf_s(c1,"%d %c %3s:%3s", &book, &c, &h, &m2);
			if (book != 0)
			{
				int time1;
				//time1 = atoi(h) * 60 + atoi(m2);
				if (c == 'S')//����
				{
					if (!m.count(book))//����û�н��
						m.insert(pair<int, int>(book, time1));
					else//�����������Եڶ���Ϊ׼
						m.find(book)->second = time1;
				}
				else if (c == 'E')//����
				{
					if (m.count(book))//���Ȿ��
					{

						int time2 = m.at(book);
						time2 = time1 - time2;
						bookTime += time2;
						bookSum++;
						m.erase(book);
					}
				}
			}
			else
				break;
		}
		if (bookSum == 0)
			cout << "0 0"<<endl;
		else
		{//��������
			cout << bookSum << " " << (int)(1.0 * bookTime / bookSum + 0.5) << endl;
		}
		bookSum = 0;
		bookTime = 0;
		bookflag = 0;
		m.clear();

	}
	system("pause");


}

/*
#include<iostream>
#include<cstdio>
#include<map>
#include<cmath>
#include<cstring>
using namespace std;
const int maxn = 1e3 + 5;
int book[maxn];//��¼������ʱ��

//��ʱ��ת��Ϊ������
int cnt(string s)
{
	int h = (s[0] - '0') * 10 + s[1] - '0';
	int m = (s[3] - '0') * 10 + s[4] - '0';
	int time = h * 60 + m;
	return time;
}

//���ý����¼
void reset(int* book)
{
	for (int i = 0; i<maxn; i++)
		book[i] = -1;
	return;
}

int main()
{
	int day, id;//��¼����������ı��
	char ch;
	string s;
	cin >> day;
	cin >> id >> ch >> s;
	int t = 0, n = 0;//t-�������,n-���Ķ�ʱ��
	reset(book);
	while (true){
		if (id == 0){
			reset(book);//ÿ�������Ҫ���ý����¼
			double ans;//ƽ���Ķ�ʱ��
			if (t) ans = round(n*1.0 / t);
			else ans = 0;
			cout << t << " " << ans << endl;
			day--;
			t = 0;
			n = 0;
		}
		//����ǽ��飬ֱ�Ӽ�¼��������ʱ��
		else if (ch == 'S') book[id] = cnt(s);
		//����ǻ��飬�Ǳ�����֮ǰ����ģ�������Ϊ��Ч�����¼��������
		else if (ch == 'E' && book[id] != -1){
			t++;//�������¼�������������Ȼ�ĺ�������Ч�Ľ����¼
			n += cnt(s) - book[id];
			book[id] = -1;//������󽫸���ı������
		}
		if (day == 0) return 0;
		cin >> id >> ch >> s;
	}
	return 0;
}*/



/*#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int n, num, hh, mm; int t; float sum; int count; char ch;
	map<int, int> a;
	scanf("%d", &n);
	count = 0; sum = 0; t = 0;
	while (count<n)
	{
		scanf("%d %c %d:%d", &num, &ch, &hh, &mm);
		if (ch == 'S')
		{
			a[num] = hh * 60 + mm;
		}
		if (ch == 'E')
		{
			if (a.count(num))
			{
				t++;
				sum += hh * 60 + mm - a[num];
				a.erase(num);
			}
		}
		if (num == 0)
		{
			count++;
			sum /= t;
			if (t != 0)
				printf("%d %.f\n", t, sum);
			else
				printf("%d 0\n", t);
			a.clear();
			sum = 0; t = 0;
		}
	}
	return 0;
}*/


