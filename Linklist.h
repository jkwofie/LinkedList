#ifndef LINKLIST_H
#define LINKLIST_H
#include <iostream>
#include <string>

template <class T>

class Linklist
{
	T data;
	int size;
	Linklist *next;
	Linklist *head;

public:
	Linklist();
	void insert_at_the_beginning();
	void insert_at_the_end(T value);
	void tranverse();
	void deleteNode();
};
#endif