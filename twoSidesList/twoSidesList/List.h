#pragma once
#include <iostream>
#include <string>

template<typename T>
class List
{
	Node<T>* head;
	int Size;


	template<typename T> class Node {
	public:
		Node* pN;
		T data;
		Node(T data = T(), Node* pN = nullptr) {
			this->data = data;
			this->pN = pN;
		}
	};
public:
	List();
	~List();
	void push_back(T data);
};

