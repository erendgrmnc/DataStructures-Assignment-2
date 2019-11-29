/*@file  :DoubleLinkedList.hpp
* @description :DoubleLinkedList s�n�f�ndaki public ve private sekmelerinde s�n�fa ait metodalar� ve de�i�kenleri bulundurur.Metodalar�n deklerasyonlar�n� bulundurur.
* @course  :2.��retim C Grubu
* @assignment : 2
* @date  :20.11.2019
* @author :Salih Eren De�irmenci(salih.degirmenci@ogr.sakarya.edu.tr) */
#ifndef DOUBLELINKEDLIST_HPP
#define DOUBLELINKEDLIST_HPP

#include "windows.h"
#include "Node.h"
#include "string"
using namespace std;
class DoubleLinkedList
{
private:
	
	int size;


public:
	Node* head = NULL;
	Node* last = NULL;
	DoubleLinkedList();
	~DoubleLinkedList();
	void AddNode(string data);//Adding new Node to left of the list
	void IncSize();
	int Count();
	void PrintNodes();
	int SavedBytes();
	void AddWordsToNodes(string filename, DoubleLinkedList* list);



};




#endif 

