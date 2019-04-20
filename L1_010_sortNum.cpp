#include<iostream>
using namespace std;
#define	N 5
#define	ElemType int
void BubbleSort(ElemType arr[], int n)
{//ð����������
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				ElemType temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
}
void ImBubbleSort(ElemType arr[], int len)
{//�Ľ���ð����������
	int i; ElemType temp;
	//��¼λ�ã���ǰ����λ�ú�����������ĵط�
	int current, last = len - 1;
	while (last > 0) {
		for (i = current = 0; i < last; ++i){
			if (arr[i] > arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				//��¼��ǰ��λ�ã����û�з�������currentֵ��forѭ����ʼ����0
				current = i;
			}
		}
		//��current = 0���Ѿ�û�п��Խ�����Ԫ���ˣ����Ѿ�������
		last = current;
	}
}

void InsertSort(ElemType arr[], int len) {
	//ֱ�Ӳ�������
	int i, j;
	ElemType temp;
	for (i = 1; i < len; i++) {
		//ÿ��ѭ������temp֮ǰ�Ķ����Ѿ��ź���ģ�ֻ��Ҫ�������Ԫ�ز��뵽ǰ�����Ӧλ��
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)//ǰ��Ĵ��ں�����򽻻�
			arr[j + 1] = arr[j];
		arr[j + 1] = temp;
	}
}

void ImInsertSort(ElemType arr[], int n){
	//����ֱ�Ӳ�������
	for (int i = 1; i <= n; ++i){
		for (int j = i; j > 0; --j){
			if (arr[j] < arr[j - 1]){
				//��������С��ǰ��ľ�һֱ����
				ElemType temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

ElemType OnceSort(ElemType arr[], ElemType first, ElemType end){
	ElemType i = first, j = end;
	//��i<j���ƶ��ĵ㻹û���м�ʱѭ��
	while (i < j){
		//�ұ�����ʼ����֤i<j����arr[i]С�ڻ��ߵ���arr[j]��ʱ����������
		while (i < j && arr[i] <= arr[j]) --j;
		//��ʱ���Ѿ�����ѭ����˵��j>i ���� arr[i]����arr[j]�ˣ����i<j�Ǿ���arr[i]����arr[j]���Ǿͽ���
		if (i < j){
			ElemType temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		//����һ��ִ��ͬ���Ĳ���
		while (i < j && arr[i] <= arr[j]) ++i;
		if (i < j){
			ElemType temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	//�����Ѿ��ƶ���һ�ߵ����´��������ֵ
	return i;
}
void QuickSort(ElemType arr[], ElemType first, ElemType end){
	ElemType pivot = OnceSort(arr, first, end);
	//�Ѿ�����ֵ�ˣ��ٶ���ֵ���ҽ��еݹ�
	QuickSort(arr, first, pivot - 1);
	QuickSort(arr, pivot + 1, end);
}
int main()
{

	ElemType num[N];
	int j;
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	//ImBubbleSort(num, N);
	InsertSort(num, N);
	for ( int i = 0; i < N; i++)
	{
		cout << num[i]<<" ";
	}
	
	system("pause");
	return 0;
}










