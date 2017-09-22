// Aaron Baker

// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;

	cout << "------------------------" << endl;
	cout << "cows list  :  " << cows << endl;
	cout << endl << "Adding elements to Cows" << endl;
	cout << "-----" << endl;
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "Cows Count: " << cows.size() << "\t\tSum: " << cows.sum() << endl;
	cout << "Cows List Items :  " << cows << endl;
	cout << "-----" << endl;

	cout << endl << "Removing First Item From Cows List" << endl;
	cout << "-----" << endl;
	cows.removeFirst();
	cout << "Cows List Items :  " << cows << "\tCount: " << cows.size() << "\t\tSum: " << cows.sum() << endl;
	cout << "-----" << endl;


	cout << endl << "Setting Horses List To Cows List" << endl;
	cout << "-----" << endl;
	List horses(cows);
	cout << "Cows List :  " << cows << "\tCount: " << cows.size() << "\t\tSum: " << cows.sum() << endl;
	cout << "Horses List :  " << horses << "\tCount: " << horses.size() << "\t\tSum: " << horses.sum() << endl;
	cout << "-----" << endl;

	cout << endl << "Removing Item From Horses List" << endl;
	cout << "-----" << endl;
	horses.removeFirst();
	cout << "Horses Count: " << horses.size() << "\t\tSum: " << horses.sum() << endl;
	cout << "-----" << endl;

	cout << endl << "Inserting Item Into Horses List" << endl;
	cout << "-----" << endl;
	horses.insertAsFirst(5.67);
	cout << "Horses List : " << horses << "\tCount: " << horses.size() << "\t\tSum: " << horses.sum() << endl;
	cout << "-----" << endl;

	cout << endl << "Inserting Item Into Cows List" << endl;
	cout << "-----" << endl;
	cows.insertAsFirst(6.78);
	cout << "Cows List : " << cows << "\tCount: " << cows.size() << "\t\tSum: " << cows.sum() << endl;
	cout << "-----" << endl;

	List pigs;

	cout << "Counts For Lists" << endl;
	cout << "-----" << endl;
	cout << "Cows List : " << cows << "\tCount: " << cows.size() << "\t\tSum: " << cows.sum() << endl;
	cout << "Horses List : " << horses << "\tCount: " << horses.size() << "\t\tSum: " << horses.sum() << endl;
	cout << "Pigs List : " << pigs << "\tCount: " << pigs.size() << "\t\tSum: " << pigs.sum() << endl;
	cout << "-----" << endl;

	cout << endl << "Setting Pigs List To Cows List" << endl;
	cout << "-----" << endl;
	pigs = cows;
	cout << "-----" << endl;

	cout << endl << "New Counts For Lists" << endl;
	cout << "-----" << endl;
	cout << "Cows List : " << cows << "\tCount: " << cows.size() << "\t\tSum: " << cows.sum() << endl;
	cout << "Horse List : " << horses << "\tCount: " << horses.size() << "\t\tSum: " << horses.sum() << endl;
	cout << "Pigs List : " << pigs << "\tCount: " << pigs.size() << "\t\tSum: " << pigs.sum() << endl;
	cout << "-----" << endl;

	cout << endl << "Setting Pigs List To Horses List" << endl;
	cout << "-----" << endl;
	pigs = horses;
	cout << "-----" << endl;

	cout << endl << "Adding Items To Cows List" << endl;
	cout << "-----" << endl;
	cows.insertAsLast(4.12);
	cows.insertAsLast(8.012);
	cout << "-----" << endl;

	cout << endl << "Adding Items To Horses List" << endl;
	cout << "-----" << endl;
	horses.insertAsLast(9.28);
	horses.insertAsLast(5.234);
	horses.insertAsLast(0.782);
	horses.insertAsLast(12.730);
	cout << "-----" << endl;

	List dogs;

	cout << endl << "Created Empty List : Dogs\ndogs list : " << dogs <<  "\n-----\n\nAdding Items To Dogs List" << endl;
	cout << "-----" << endl;
	dogs.insertAsLast(7.32);
	cout << "-----" << endl;

	cout << endl << "New Counts For Lists" << endl;
	cout << "-----" << endl;
	cout << "Cows List :  " << cows << "\tCount: " << cows.size() << "\t\tSum: " << cows.sum() << endl;
	cout << "Horses List :  " << horses << "\tCount: " << horses.size() << "\t\tSum: " << horses.sum() << endl;
	cout << "Pigs List :  " << pigs << "\tCount: " << pigs.size() << "\t\tSum: " << pigs.sum() << endl;
	cout << "Dogs List : " << dogs << "\tCount: " << dogs.size() << "\t\tSum: " << dogs.sum() << endl;
	cout << "-----" << endl;
	cout << endl << "Clean Up" << endl << endl;
	return 0;
}
