#include "Linklist.h"
template <class T>

Linklist <T>::Linklist(){
	head = nullptr;
}
template <class T>

void Linklist<T>::insert_at_the_beginning(){
     int s;
	std::cout << "please how many data are you input \t";
 	std::cin>>s;
 	size = s;

	for (int i = 1; i <=size; ++i)
	{
		Linklist<T> *node = new Linklist();
		std::cout<<"please enter the value you want to store : \t";
		std::cin>>node->data;
		node->next = head;
		head = node;
	}
		
}
/*template <class T>

void Linklist<T>::insert_at_the_end(T value){
 if(head==NULL){
 	Linklist *node = new Linklist();
 	node->next=head;
 	node->data = value;
 	head = node;


 }

}*/


template <class T>

void Linklist<T>::tranverse(){
		Linklist<T> *temp = head;
		while(temp!=nullptr){
			std::cout<<temp->data;
			temp=temp->next;
		}
	}



