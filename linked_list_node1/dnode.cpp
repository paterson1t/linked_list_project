#include "dnode.h"
#include <cassert>    // Provides assert
#include <cstdlib>    // Provides NULL and size_t
#include <iostream>
using namespace std;

namespace main_savitch_5
{
	dnode *dhead_ptr = NULL;
	dnode *dtail_ptr = NULL;

	void create_dnode()
		{
		dnode *newnode;
		int data;
		cout << "Enter a value for the new node " << endl;
		cin >> data;
		newnode = new dnode(data, NULL);
		dhead_ptr = newnode;
		dtail_ptr = dhead_ptr->fore();
		cout << "The node was created succesfully " << endl;

		}
	void set_tail()
	{

		//if //(dhead_ptr->fore() != NULL)
		
			dnode *cursor;
			for (cursor = dhead_ptr; cursor != NULL; cursor = cursor->fore());
			{
				if (cursor->fore() == NULL)
					dtail_ptr = cursor;
			}
		
		//else dtail_ptr = NULL;


		
	}
	void dinsert_head()
	{
		//set_tail();
		int entry;
		cout << " Please type in your entry " << endl;
		cin >> entry;
		dhead_ptr = new dnode(entry, dhead_ptr, NULL);

		cout << dhead_ptr->data() << " was added succesfully to the heaad " << endl;


	}

	/*void list_dtail_insert()
	{
		set_tail();

			cout << dtail_ptr->data() << " Was added successfully " << endl;
		}
		else 
			cout << "There is no tail pointer in this list " << endl;
			
	}*/

	void dremove_head()
	{
		set_tail();
		dnode *remove_ptr;

		remove_ptr = dhead_ptr;

		dhead_ptr = dhead_ptr->fore();

		delete remove_ptr;

	}


	void dtail_remove()
	{
		set_tail();

		dnode *remove_ptr;

		remove_ptr = dtail_ptr;

		dtail_ptr = dtail_ptr->back();

		delete remove_ptr;

	}


	void dlist_print()
	{
		set_tail();

		if (dhead_ptr == NULL)
		{
			cout << " the current list is empty " << endl;
		}
		else if (dhead_ptr != NULL)
		{
			dnode *cursor;
			cout << "The linked list is " << endl;
			for (cursor = dhead_ptr; cursor != NULL; cursor = cursor->fore())
				cout << cursor->data() << endl;
		}
	}

	void dlist_print_reverse()
	{
		set_tail();

		if (dtail_ptr->back() == NULL)
		{
			cout << "The current list is empty " << endl;
		}

		else if (dtail_ptr->back() != NULL)
		{
			dnode *cursor;
			cout << "The linked list is " << endl;
			for (cursor = dtail_ptr; cursor != NULL; cursor = cursor->back())
				cout << cursor << endl;


		}
	}

			void dlist_show_statistics()
			{
				int  num = 0;
				dnode *cursor;
				int smallest = dhead_ptr->data();
				int largest = dhead_ptr->data();
				double sum;
				int total = 0;

				for (cursor = dhead_ptr; cursor->fore() != NULL; cursor = cursor->fore())
				{
					if (smallest > cursor->data())
					{
						smallest = cursor->data();
					}

					if (largest < cursor->data())
					{
						largest = cursor->data();
					}
					sum =+ cursor->data();
					total++;
				}
				int avg = (sum / total);

				cout << "Largest: " << largest << endl;
				cout << "Smallest: " << smallest << endl;
				cout << "Average " << avg << endl;
				cout << "total sum: " << sum << endl;
			}



	}

