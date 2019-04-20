
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>
#include <set>
#include <stack>
using namespace std;
#define ll long long
#define maxn 1000010
#define angel 0x3f3f3f3f
#define eps 1e-9
#define my_angel main
const int mod = 1e9 + 7;
char str[maxn];
ll dp[maxn][4];
int my_angel()
{
	scanf_s("%s", str);
	int length = strlen(str);
	for (int i = 0; i<length; i++)
		dp[i][0] = 1;
	dp[0][1] = 1;
	for (int i = 1; i<length; i++)
	{
		if (str[i] == str[i - 1])//������ڵ���ĸ��ͬ,��n��������ͬ��ĸ����length-n��
			dp[i][1] = dp[i - 1][1] + dp[i - 1][0] - 1;
		else
			dp[i][1] = dp[i - 1][1] + dp[i - 1][0];
	}
	cout << dp[length - 1][1];
	dp[1][2] = 1;
	for (int i = 2; i<length; i++)
	{
		if (str[i] == str[i - 1])
			dp[i][2] = dp[i - 1][1] + dp[i - 1][2] - dp[i - 2][1];
		else if (str[i] == str[i - 2])
			dp[i][2] = dp[i - 1][1] + dp[i - 1][2] - 1;
		else
			dp[i][2] = dp[i - 1][1] + dp[i - 1][2];
	}
	dp[2][3] = 1;
	for (int i = 3; i<length; i++)
	{//dp[i][3]ǰi+1���ַ���ɾ��3��
		if (str[i] == str[i - 1])//��Ӧabcdeff
			dp[i][3] = dp[i - 1][3] + dp[i - 1][2] - dp[i - 2][2];
		else if (str[i] == str[i - 2])//��Ӧabcdefe
			dp[i][3] = dp[i - 1][3] + dp[i - 1][2] - dp[i - 3][1];
		else if (str[i] == str[i - 3])//��Ӧabcdefd
			dp[i][3] = dp[i - 1][3] + dp[i - 1][2] - 1;
		else//��Ӧabcdefg
			dp[i][3] = dp[i - 1][3] + dp[i - 1][2];
	}
	printf("%lld\n", dp[length - 1][0] + dp[length - 1][1] + dp[length - 1][2] + dp[length - 1][3]);
	return 0;
}