#pragma once
#include"Node.h"
#include<iostream>
using namespace std;
template<class T>
class Linkedlist
{
	Node<T>* Head;
public:
	Linkedlist()
	{
		Head = nullptr;
	}

	void PrintList()	const
	{
		cout << "\nprinting list contents:\n\n";
		Node<T>* p = Head;

		while (p)
		{
			cout << "[ " << p->getitem() << " ]";
			cout << "--->";
			p = p->getnext();
		}
		cout << "NULL\n";
	}
	bool isempty()
	{
		if (Head == nullptr)
		{
			return true;
		}
		return false;
	}
	bool add(T item)
	{
		Node<T>* p = new Node<T>;
		Node<T>* temp = Head;
		if (!Head)
		{
			Head = p;
			Head->setitem(item);
			return true;
		}
		else
		{
			while (temp->getnext())
			{
				temp = temp->getnext();
			}
			temp->setnext(p);
			p->setitem(item);
			return true;
		}
		return false;

	}
	Node<T>* Returnhead()
	{
		return Head;
	}

};