#include"Queue.h"

int main() {
	Queue<double>q;
	
	int choice;
	while (true) {
		cout << "Enter 1 to push back a new element" << endl;
		cout << "Enter 2 to delete FIRST element" << endl;
		cout << "Enter 3 to get last element" << endl;
		cout << "Enter 4 to get first element" << endl;
		cout << "Enter 5 to check if the queue is empty" << endl;
		cout << "Enter 6 to print all queue" << endl;
		cout << "Enter 0 to exit" << endl;
		cin >> choice;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			double el;
			cin >> el;
			q.push(el);
			break;
		case 2:
			if(!q.empty())
				q.pop();
			else cout << "Queue is already empty" << endl << endl;
			break;
		case 3:
			if (!q.empty())
				cout << endl << q.back() << endl;
			else cout << "Queue is empty" << endl << endl;
			break;
		case 4:
			if (!q.empty())
				cout << endl << q.front() << endl;
			else cout << "Queue is empty" << endl << endl;
			break;
		case 5:
			cout << endl;
			if (q.empty())
				cout << "Queue is empty now" << endl;
			else
				cout << "Queue has still got " << q.size() << " elements" << endl;
			cout << endl;
			break;
		case 6:
			if (!q.empty())
				q.print();
			else cout << "Queue is empty" << endl << endl;
			break;
		}
	}

	Queue<double>q2;
	q2 = q;
	cout << "copy:" << endl;
	q2.print();

	system("pause");
	return 0;
}