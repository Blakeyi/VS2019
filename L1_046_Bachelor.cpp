//#include<iostream>
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//	int x;
//	__int64  s,n;
//	char num[20][21] = {"1","11","111","1111","11111","111111","1111111","11111111","111111111","1111111111",
//		"11111111111","111111111111", "1111111111111","11111111111111","111111111111111","1111111111111111","11111111111111111",
//		"111111111111111111","1111111111111111111" ,"11111111111111111111" };
//	cin >> x;
//	for (int  i = 0; i < 20; i++)
//	{
//		s = _atoi64(num[i]);
//		if (s%x == 0)
//		{
//			n = s / x;
//			cout << n << " " << i+1;
//			break;
//		}
//		
//	}
//
//}


//#include <iostream>
//#include<bit/stdc++.h>
//
//using namespace std;
//
//typedef unsigned long long ll;
//int main() {
//	ll N, big = 1, cnt = 1;;
//	scanf_s("%lld", &N);
//	while (big < N) {//���ҵ�N�����Ĺ��
//		big *= 10;
//		big += 1;
//		++cnt;
//	}
//	while (1) {//������ʽ�ֽ⣬�������ڴ�������
//		printf_s("%lld", big / N);
//		if (big % N == 0) {
//			break;
//		}
//		else {
//			big %= N;
//			big *= 10;
//			big += 1;
//			++cnt;
//		}
//	}
//	printf_s(" %lld", cnt);
//	return 0;
//}
/*�����*/
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	void factorial(int n);  //�׳˺���
//
//	int n;
//
//	while (cin >> n)
//		factorial(n);
//
//	return 0;
//}
//
//void factorial(int n)
//{//�����
//	int a[10001];//���ڴ洢��ֵ
//	int places, carry, i, j;
//
//	a[0] = 1;
//	places = 0;   //��ǰ������λ��
//	for (i = 1; i <= n; i++)
//	{
//		carry = 0;   //��λ
//
//		for (j = 0; j <= places; j++)
//		{//�ȴӵ�λ��ÿʮ���Ƶ���λΪ����Ƶ�һλ����ʼ���㣬�ɵ͵��ߣ����ճ˷�������ˣ���λ
//			a[j] = a[j] * i + carry;//��ˣ����Ͻ�λ
//			carry = a[j] / 10000;//�����λ������ӵ���λ��
//			a[j] %= 10000;//����ȡ��������
//		}
//
//		if (carry > 0)  //���һ��������ǰһλ����һ������ǰ��λ
//		{
//			places++;//forѭ����Ľ�λ�������ӵ�λ
//			a[places] = carry;
//		}
//	}
//
//	/*
//	  ���
//	  ���λԭ�������
//	  ����λС��1000�ģ���λ��0
//	*/
//	cout << a[places];
//	for (i = places - 1; i >= 0; i--)//�Ӻ��濪ʼ���
//		cout << setw(4) << setfill('0') << a[i];
//
//	cout << endl;
//}


//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[1000] = {0}, x, len = 0;
//	cin >> x;
//	while (true) {
//		int remainder = 0;
//		for (int i = len / 4 + 1; i > 0; i--)
//		{
//			int num = remainder * 10000 + a[i];
//			remainder = num % x;
//		}
//		if (remainder == 0 && len != 0) {//�ѳ���
//			for (int i = len / 4 + 1; i > 0; i--)
//			{
//				int num = remainder * 10000 + a[i];
//				remainder = num % x;
//				a[i] = num / x;
//			}
//			int flag = 0;
//			for (int i = len / 4 + 1; i > 0; i--)
//			{
//				if (flag != 0)printf("%04d", a[i]);
//				if (a[i] != 0 && flag == 0) {
//					cout << a[i];
//					flag++;
//				}
//			}
//			cout << " " << len << endl;
//			break;
//		}
//		else {
//			a[len / 4 + 1] = a[len / 4 + 1] * 10 + 1;
//			len++;
//		}
//	}
//
//	return 0;
//}