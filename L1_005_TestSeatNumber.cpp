#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	string ticket_number;//׼��֤��
	int test_machine_seat_number;//�Ի���λ��
	int exam_seat_number;//������λ��
};

int main()
{
	int N = 1;
	cin >> N;
	Student * s = new Student[N];
	for (int i = 0; i < N; i++)
	{
		cin >> s[i].ticket_number >> s[i].test_machine_seat_number >> s[i].exam_seat_number;
	}
	int M = 1;
	cin >> M;
	//�����Ի���λ��
	//int* t_m_s_n = new int[M];
	int t_m_s_n[M];
	for (int i = 0; i < M; i++)
	{
		cin >> t_m_s_n[i];
	}
	//����ÿ���Ի���λ�ţ�Ѱ�Ҳ������Ӧ׼��֤�źͿ�����λ����
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (t_m_s_n[i] == s[j].test_machine_seat_number)
			{
				cout << s[j].ticket_number << " " << s[j].exam_seat_number << endl;
				break;
			}
		}
	}
	delete t_m_s_n;
	delete[] s;
	t_m_s_n = NULL;
	s = NULL;
	return 0;
}