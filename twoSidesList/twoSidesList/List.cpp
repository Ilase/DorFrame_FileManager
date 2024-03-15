#include "List.h"


template<typename T> 
List<T>::List() {
	Size = 0;
	head = nullptr;
}
template<typename T> 
List<T>::~List() {

}

template<typename T>
void List<T>::push_back(T data)
{
	if (head = nullptr) head = new Node<T>(data);
	else {

	}
}
