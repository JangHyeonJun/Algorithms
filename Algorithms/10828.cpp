//#include <iostream>
//#include <string>
//using namespace std;
//
//// 우선 배열을 통해 간단하게 int를 가지는 스택 구현
//
//class Stack
//{
//	int _data[10000];
//	int _size;
//	int _top;
//
//public:
//	Stack();
//	void push(int input);
//	void pop();
//	void size();
//	void empty();
//	void top();
//};
//Stack::Stack()
//{
//	for (int i = 0; i < sizeof(_data) / sizeof(int); i++)
//		_data[i] = 0;
//	_size = 0;
//	_top = -1;
//}
//void Stack::push(int input)
//{
//	_size++;
//	_top++;
//	_data[_top] = input;
//}
//void Stack::pop()
//{
//	if (_size < 1)
//		cout << -1 << '\n';
//	else
//	{
//		cout << _data[_top] << '\n';
//		_data[_top] = 0;
//		_top--;
//		_size--;
//	}
//}
//void Stack::size()
//{
//	cout << _size << '\n';
//}
//void Stack::empty()
//{
//	if (_size < 1)
//		cout << 1 << '\n';
//	else
//		cout << 0 << '\n';
//}
//void Stack::top()
//{
//	if (_size < 1)
//		cout << -1 << '\n';
//	else
//		cout << _data[_top] << '\n';
//}
//
//int main()
//{
//	Stack stack_i;
//	string command;
//	int N, num;
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> command;
//		if (command == "push")
//		{
//			cin >> num;
//			stack_i.push(num);
//		}
//		else if (command == "pop")
//			stack_i.pop();
//		else if (command == "size")
//			stack_i.size();
//		else if (command == "empty")
//			stack_i.empty();
//		else if (command == "top")
//			stack_i.top();
//	}
//
//	return 0;
//}