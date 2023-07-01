#pragma once
#include <fstream>
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Stack 
{
	struct Node
	{
		int data;
		char _data;
		Node* next;
	};

   typedef Node* TStack;

   TStack top;

public:
	Stack();
	~Stack();
	void clearStack();
	bool isEmpty();
	void pushTask(char _data, int elem);
	void pop();
	//void peek(TStack& top, int& elem);
	int peek();
	char peek_();
};
int Task(string str);