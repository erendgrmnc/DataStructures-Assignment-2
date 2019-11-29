/*@file  :DoubleLinkedList.cpp
* @description :Node s�n�f�n�n metodlar�n�n g�vdelerini bulundurur.
* @course  :2.��retim C Grubu
* @assignment : 2
* @date  :20.11.2019
* @author :Salih Eren De�irmenci(salih.degirmenci@ogr.sakarya.edu.tr) */
#include "Node.h"
using namespace std;

Node::Node(string str)
{
	this->data = str;
	this->next = nullptr;
	this->prev = nullptr;
	this->intData = 0;

}

Node::~Node()
{
	delete this;
}

string Node::ReturnData()
{
	return data;
}

int Node::ReturnIntData()
{
	return intData;
}

void Node::SetIntData(int counter)
{
	this->intData = counter;
}

void Node::SetData()
{
	
		this->data = "";
	

}

void Node::DataControl(Node* newNode,Node *last)
{
	Node* temp = last;
	int counter = 1;
	
	

	while (temp->prev != NULL)
	{
		if (newNode->data == temp->data)
		{
			savedBytes += newNode->data.length() - to_string(counter).length();
			newNode->data = "";
			newNode->intData = counter;
			break;
			
		}
		else
		{
			temp = temp->prev;
			counter++;
		}
	}

	if (newNode->data == temp->data)
	{
		savedBytes += newNode->data.length() - to_string(counter).length();
		newNode->data = "";
		newNode->intData = counter;
		
	}
	

}

int Node::ReturnSavedBytes()
{
	return savedBytes;
}