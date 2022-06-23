#include "Queue.h"
#include <iostream>

using namespace std;

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
