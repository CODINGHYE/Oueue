#include "Queue.h"
#include <iostream>

using namespace std;

//inline int fin(int a, int b) //inline �Լ� ȣ���� �Ҷ� �Լ��� ��� �ڵ���� ȣ���ϴ� ���� �ȿ� ����.
//{
//	return a + b; 
//}

int main()
{
	Queue queue;
	queue << 3 << 5 << 10;
	while (true) {
		if (!queue)
			break;
		int x;
		queue >> x;
		cout << x << ' ';

	}

	cout << endl;
}