/*@file  :DoubleLinkedList.cpp  
* @description :DoubleLinkedList s�n�f�ndaki metodlar�n g�vderlerini bulundurur.
* @course  :2.��retim C Grubu  
* @assignment : 2    
* @date  :20.11.2019  
* @author :Salih Eren De�irmenci(salih.degirmenci@ogr.sakarya.edu.tr) */ 
#include "DoubleLinkedList.h"
#include "iostream"
#include "fstream"
using namespace std;


void DoubleLinkedList::IncSize()
{
	size++;
}

int DoubleLinkedList::Count()
{
	return size;
}

DoubleLinkedList::DoubleLinkedList()
{
	size = 0;
	
}
DoubleLinkedList::~DoubleLinkedList()
{
	delete this;
}


void DoubleLinkedList::AddNode(string data)
{

	Node* newNode = new Node(data);
	
	
		if (head == NULL)
		{
			head = newNode;
			head->next = NULL;
			head->prev = NULL;
			last = head;
			IncSize();
			
		}

		else
		{
			Node* temp = head;
			newNode->DataControl(newNode,last);
			
			while (temp->next != NULL)
			{
				if (temp->next == NULL) break;
				temp = temp->next;
			}
			
			newNode->prev = temp;
			temp->next = newNode;
			last = newNode;
			IncSize();

			
			
		}

		
	
}

void DoubleLinkedList::PrintNodes()
{

	Node* temp = head;
	cout << "NULL" << "<-";
	while(temp->next != NULL)
	{
		
		cout << "<- ";
		if (temp->ReturnData()!= "")
		{
			cout << temp->ReturnData() << "-" << temp->ReturnIntData() << "-> ";
		}
		else
		{
			cout << temp->ReturnIntData() << "-> "; 
		}
		temp = temp->next;
	
	}
	//FOR PRINTING LAST NODE
	cout << "<-";
	if (temp->ReturnData() != "")
	{
		cout << temp->ReturnData() << "-" << temp->ReturnIntData() << "-> <- NULL" << endl;
	}
	else
	{
		cout << temp->ReturnIntData() << "-> <- NULL"<< endl;
	}
	cout << "Saved Bytes :" << SavedBytes() << endl;

	
	 
}

int DoubleLinkedList::SavedBytes()
{
	Node* temp = head;
	int bytes = 0;
	while (temp->next != NULL)
	{
		bytes += temp->ReturnSavedBytes();
		temp = temp->next;
	}
	bytes += temp->ReturnSavedBytes();
	return bytes;

	
}

void DoubleLinkedList::AddWordsToNodes(string filename, DoubleLinkedList* list)
{
	ifstream file;
	string word;
	file.open(filename);
	while (file >> word)
	{

		list->AddNode(word);

	}
	file.close();


}


