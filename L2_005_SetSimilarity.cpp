// �Ƚ�ÿ��������set���棬Ȼ�����м��ϴ���vector��������Ҫ��,���ò���set_union���������
// ��������Ԫ�ظ������֮�󣬼�ȥ���ǵĲ���Ԫ�ظ������ٳ��Բ���Ԫ�ظ����������ǵ����ƶȣ��ǵ�2λ���ȡ�
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <iterator>
#include<iomanip>
using namespace std;

int main()
{
	//freopen("data.txt", "r", stdin);
	int N;
	int K;
	int num, num1, num2,count=0;
	vector< set<int> > collection;
	vector<float> result;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		set<int> s1;
		cin >> num1;
		for (int i = 0; i < num1; i++)
		{
			cin >> num;
			s1.insert(num);
		}
		collection.push_back(s1);
	}
	cin >> K;
	for (int i = 0; i < K; i++)
	{

		cin >> num1 >> num2;
		for (auto it = collection[num1 - 1].begin(); it != collection[num1 - 1].end(); it++)
		{
			if (collection[num2 - 1].find(*it) != collection[num2 - 1].end())
				count++;
		}
		float f = (double)count / (collection[num1 - 1].size() + collection[num2 - 1].size() - count);
		cout << fixed << setprecision(2) << f*100<<"%"<< endl;
		count = 0;
		
	}
	return 0;
}
