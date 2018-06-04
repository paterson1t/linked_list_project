// FILE: node1.cpp
// IMPLEMENTS: The functions of the node class and the
// linked list toolkit (see node1.h for documentation).
// INVARIANT for the node class:
//   The data of a node is stored in data_field, and the link in link_field.

#include "node1.h"
#include <cassert>    // Provides assert
#include <cstdlib>    // Provides NULL and size_t
#include <iostream>
using namespace std;

namespace main_savitch_5
{
	node *head_ptr = NULL;
	node *tail_ptr = NULL;

	void create_node()
	{
		node *newnode;
		int data;
		cout << "Enter a value for the new node " << endl;
		cin >> data;
		newnode = new node(data, NULL);
		head_ptr = newnode;
		tail_ptr = newnode;

	}


	

	void list_head_insert()
	{
		int entry;
		cin >> entry;
		head_ptr = new node(entry, head_ptr);
	}


	

	

	void list_head_remove()
	{
		node *remove_ptr;

		remove_ptr = head_ptr;
		head_ptr = head_ptr->link();
		delete remove_ptr;
	}


	void list_tail_remove()
	{
		node *remove_ptr = NULL;
		node *cursor = NULL;

		for (cursor = head_ptr; cursor != NULL; cursor = cursor->link())
			if (cursor = tail_ptr )
			{
				remove_ptr = cursor;
			}
			else if (head_ptr = NULL)
			{
				cerr << "Error occured, list is empty " << endl;
			}
		delete remove_ptr;


	}

	void list_tail_insert()
	{
		node *cursor = NULL;
		int data;
		if (head_ptr == NULL)
		{
			cout << "There is no tail pointer " << endl;
		}
		else
		cout << "Enter the data please " << endl;
		cin >> data;
		cursor = tail_ptr;
		tail_ptr = new node(data, NULL);

	}

	const void list_print()
	{
		node *cursor = NULL;
		while (head_ptr != NULL)
		{
			for (cursor = head_ptr; cursor != NULL; cursor = cursor->link())
			{
				cout << cursor << " " << endl;
			}
		}
	}

	void list_show_statistics()
	{
		int  num = 0;
		node *cursor;
		int smallest = head_ptr->data();
		int largest = head_ptr->data();
		int sum;
		int total = 0;
		
			for (cursor = head_ptr; cursor != NULL; cursor = cursor->link())
			{
				if (smallest > cursor->data())
				{
					smallest = cursor-> data();
				}
			
				if (largest < cursor->data())
				{
					largest = cursor->data();
				}
				sum = +cursor->data();
				total++;
			}
			double avg = (sum / total);

			cout << "Largest: " << largest << endl;
			cout << "Smallest: " << smallest << endl;
			cout << "Average " << avg << endl;
			cout << "total sum: " << sum << endl;
		}
	
	}

	


/*Total sum: 5
Largest: 5
Smallest: 5
Average: 5
*/