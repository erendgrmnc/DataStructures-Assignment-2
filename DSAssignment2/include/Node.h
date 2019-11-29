/*@file  :Node.hpp
* @description :Node s�n�f�ndaki public ve private sekmelerinde s�n�fa ait metodalar� ve de�i�kenleri bulundurur.Metodalar�n deklerasyonlar�n� bulundurur.
* @course  :2.��retim C Grubu
* @assignment : 2
* @date  :20.11.2019
* @author :Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr)*/
#pragma once
#ifndef NODE_HPP
#define NODE_HPP


#include "windows.h"
#include "string"


using namespace std;

class Node 
{
private:
	string data;
	int intData;
	int savedBytes = 0;
	
	
	

public:
	Node(string str);
	~Node ();
	
	Node* next;
	Node* prev;
	string ReturnData();
	void SetIntData(int counter);
	void SetData();
	int ReturnIntData();
	void DataControl(Node *newNode,Node *last);
	int ReturnSavedBytes();
	
	


};



#endif
