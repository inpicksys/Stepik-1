/*
����� ���� ������������ �����

���� ����� ����������� �����. ������� ����� ��� ����.

������ ������� ������
�� ���� ������ ����� �� 100 �� 999.

������ �������� ������
�������� ���� ����� ����� - ����� �� ������.

Sample Input:
476

Sample Output:
17
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << (n % 10) + ((n % 100) / 10) + ((n % 1000) / 100);
	return 0;
}