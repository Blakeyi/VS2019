
#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int N, num[100][100] = {0};//�����洢��λ��
	int Max=100;//���������
	int out[100] = { 0 };
	int sum=0;//��ǰ����Ķ�������
	
	vector<int> team;//ÿ��ѧУ�Ķ�����
	int flag = -1;
	int n = 1;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int m;
		cin >> m;
		team.push_back(m);
	}
	for (int i = 0; i < N; i++)
	{
		if (Max <= team[i])
			Max = team[i];
	}
	
	for (int i = 0; i < Max; i++)
	{
		sum = 0;
		for (int a = 0; a < N; a++)
		{
			if (team[a] <= i)
				sum++;
		}
		for (int k = 0; k < 10; k++)
		{
			for (int j = 0; j < N; j++)//����ÿ��ѧУ
			{
				if (team[j]> i)
				{
					if (sum == N - 1)//ʣ�����һ��ѧУ��ʱ��
					{
						if (j!=flag)//flagΪ��һ��ѧУ�ı��
						{//��ǰ����˲��Ǻ�Jͬһ��ѧ��ʱ����������һ�������ټ�2
							n += 2;
							num[j][i * 10 + k] = n - 2;
						}
						else
						{ 
							n += 2;
							num[j][i * 10 + k] = n - 1;
						}
						
					}

					//num[j][i * 10 + k] = i*N * 10 + 1 + j + k*N;
					else
					{
						num[j][i * 10 + k] = n++;
						flag = j;
					}
					
				}
				
				
			}
		}
		
	}
	for (int i = 0; i < N; i++)
	{
		cout << "#" << i + 1 << endl;
		for (int j = 0; j < 100; j++)
		{
			if (num[i][j] != 0)
				cout << num[i][j];
			else
				break;
			if ((j + 1) % 10 == 0)
				cout << endl;
			else
				cout << " ";
		}
	
		
			
	}
}