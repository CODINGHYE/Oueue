#include "Queue.h"
#include <iostream>

using namespace std;

//inline int fin(int a, int b) //inline 함수 호출을 할때 함수의 모든 코드들이 호출하는 변수 안에 들어간다.
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