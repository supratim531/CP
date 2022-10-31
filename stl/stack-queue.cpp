#include <stack>
#include <queue>
#include <iostream>
using namespace std;

void print(stack<int> s) {
	cout << "stack size: " << s.size() << '\n';
	while (!s.empty())
		cout << s.top() << '\n', s.pop();
	cout << '\n';
}

void print(queue<string> q) {
	cout << "queue size: " << q.size() << '\n';
	while (!q.empty())
		cout << q.front() << '\n', q.pop();
	cout << '\n';
}

int main() {
	// stack
	stack<int> s;
	s.push(43);
	s.push(12);
	s.push(89);
	s.push(57);
	print(s);

	// queue
	queue<string> person;
	person.push("Hemant");
	person.push("Raja");
	person.push("Himesh");
	person.push("Tony");
	person.push("Happy");
	print(person);
	cout << "First person is: " << person.front() << '\n';
	cout << "Last person is: " << person.back() << '\n';
	return 0;
}
