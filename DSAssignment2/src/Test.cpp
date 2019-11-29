/*@file  :Test.cpp
* @description :Test program� i�in gerekli kodlar� bulundurur.
* @course  :2.��retim C Grubu
* @assignment : 2
* @date  :20.11.2019
* @author :Salih Eren De�irmenci(salih.degirmenci@ogr.sakarya.edu.tr) */
#include "DoubleLinkedList.h"
#include "iostream"

using namespace std;

DoubleLinkedList* list = new DoubleLinkedList;




int main()
{
	list->AddWordsToNodes("sakarya.txt",list);

	list->PrintNodes();

	system("pause");
	return 0;
	
}

