#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, z=0, m=0,flag=0; 
	char num[100][18];//������֤��
	int q[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };//Ȩ��
	int z1[11]  = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//������zֵ
	string m1 = "10X98765432";//��֤��ֵ
	cin >> n;
	for (int i = 0; i < n;i++)
		cin >> num[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 17; j++)
		{
			if (int(num[i][j])>47 && int(num[i][j]) < 58)
				z += (int(num[i][j])-48)*q[j];//�ж��Ƿ�Ϊ����
			else
			{
				for (int k = 0; k < 18; k++)
				cout << num[i][k];
				cout << endl;
				flag = 1;
				break;
			}
				
		}
		if (!flag)
		{//��֤��ȷ��
			z = z % 11;
			if (num[i][17] == m1[z])
			{
				m++;
				if (m == n)
					cout << "All passed" ;
			}
			else
			{
				for (int k = 0; k < 18; k++)
					cout << num[i][k];
				cout << endl;
			}
			
			

		}
		z = 0;
		flag = 0;

	}

		
	system("pause");
	return 0;
}