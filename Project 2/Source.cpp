#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;

struct link
{
	int number;
	link* next;
};

void searchRecursive(link* pointer, int searchValue);

int main(int argc, char** argv)
{
	srand(time(0));
	link* n = new link;
	link* head = n;
	link* tail = n;
	int searchNumber;
	for (int i = 0; i < 500; i++)
	{
		n = new link;
		int random = rand() % 100;
		n->number = random;
		tail->next = n;
		tail = n;

	}
	n->next = NULL;
	tail = head;
	cout << "Enter the number you want to search: ";
	cin >> searchNumber;
	searchRecursive(head, searchNumber);
	_getch();
}

void searchRecursive(link* pointer, int searchValue)
{
	if (pointer == NULL)
	{
		cout << searchValue << " was not found.\n";
	}
	else if (pointer->number == searchValue)
	{
		cout << searchValue << " was found.\n";
	}
	else
	{
		searchRecursive(pointer->next, searchValue);
	}
}