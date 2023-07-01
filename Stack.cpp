#include "Stack.h"

Stack::Stack()  // Создание пустого стека
{
	top = nullptr;
}

Stack::~Stack()
{
	clearStack();
}

void Stack::clearStack()
{ // Уничтожение стека
	while (!isEmpty()) 
		pop();
}

bool Stack::isEmpty() 
{ // Проверка стека на пустоту
	return top == nullptr;
}

void Stack::pushTask(char _data, int elem)
{
	if (_data == ')' || _data == '(') {
		TStack p = new Node;
		p->data = elem;
		p->next = top;
		top = p;
	}
}

void Stack::pushTask(char _data, int i)
{
	i++;
	if (_data == ')' || _data == '(')
	{
		TStack p = new Node;
		p->_data = _data;
		p->data = i;
		p->next = top;
		top = p;
	}
}

void Stack::pop()
{
	if (!isEmpty())
	{
		TStack p = top;
		top = p->next;
	}
}

int Stack::peek()
{
	return top->data;
}

char Stack::peek_()
{
	return top->_data;
}

int Task(string str) {
	if (str.size() != 0) {
		int i = 0;
		char s = str[i];
		Stack stack;
		while (s) {
			if (s == '(') {
				stack.pushTask(s, i);
			}
			else {
				if (s == ')') {
					if (!stack.isEmpty())
					{
						cout << stack.peek() << " " << i + 1 << ";";
						stack.pop();
					}
					else return -1;
				}
			}
			i++;
			s = str[i];
		}
	}
}


//void pop(TStack& top) 
//{ // Удаление элемента из стека
//	TStack p = top;
//	top = top->next;
//	p->next = nullptr;
//	delete p;
//	p = NULL;
//}

//void peek(TStack& top, int& elem) 
//{ // Извлечение элемента из стека
//	TStack p = top;
//	top = top->next;
//	elem = p->data;
//	p->next = 0;
//	delete p;
//	p = NULL;
//}

