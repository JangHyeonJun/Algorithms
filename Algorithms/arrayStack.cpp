#include <iostream>
#include "arrayStack.h"

using namespace std;

Stack::Stack()
{
	for (int i = 0; i < sizeof(_data) / sizeof(int); i++)
		_data[i] = 0;
	_size = 0;
	_top = -1;
}
void Stack::push(int input)
{
	_size++;
	_top++;
	_data[_top] = input;
}
void Stack::pop()
{
	if (_size < 1)
		cout << -1 << '\n';
	else
	{
		cout << _data[_top] << '\n';
		_data[_top] = 0;
		_top--;
		_size--;
	}
}
void Stack::size()
{
	cout << _size << '\n';
}
void Stack::empty()
{
	if (_size < 1)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';
}
void Stack::top()
{
	if (_size < 1)
		cout << -1 << '\n';
	else
		cout << _data[_top] << '\n';
}