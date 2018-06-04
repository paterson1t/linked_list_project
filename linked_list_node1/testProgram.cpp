#include "node1.h"
#include "dnode.h"
#include <iostream>
#include <cstdlib>
#include <cassert> 

using namespace std;
using namespace main_savitch_5;

void singlyList();
void doublyList();


int main()
{
	int cmd = 0;
	node *head_ptr = NULL;
	node *p = new node(30.0, head_ptr);
	do
	{
		cout << "Menu " << endl;
		cout << "1. Singly linked list\n";
		cout << "2. doubly linked list\n";
		cout << "3. exit\n";
		cin >> cmd;

		switch (cmd)
		{
		case 1: singlyList();
			break;

		case 2: doublyList();
			break;

		case 3: break;

		default:
			cout << "Please Enter a valid input " << endl;
		}
		
	} 
	while (cmd != 3);

	

	return 0;
}

void singlyList()
{
	int cmd = 0;
	do
	{
		cout << "1. Create a node " << endl;
		cout << "2. Insert a node to the head" << endl;
		cout << "3. Insert a node to the tail" << endl;
		cout << "4. Remove a node from the head" << endl;
		cout << "5. Remove a node from the tail" << endl;
		cout << "6. Print the list" << endl;
		cout << "7. Show statistics" << endl;
		cout << "8. Exit to main menu" << endl;

		cin >> cmd;
		switch (cmd)
		{
		case 1: create_node();
			cout << " Node was created ";
			break;
		case 2:  list_head_insert();
			break;
		case 3: list_tail_insert();
			break;
		case 4: list_head_remove();
			break;
		case 5: list_tail_remove();
			break;
		case 6: list_print();
			break;
		case 7: list_show_statistics();
			break;
		case 8: break;
		default:
			cout << "incorrect input try again " << endl;
			break;
		}
		} while (cmd != 8);
	}

void doublyList()
{
	int cmd = 0;
	
	do {
		cout << "1. Create a node " << endl;
		cout << "2. Insert a node to the head" << endl;
		cout << "3. Insert a node to the tail" << endl;
		cout << "4. Remove a node from the head" << endl;
		cout << "5. Remove a node from the tail" << endl;
		cout << "6. Print the list" << endl;
		cout << "7. print the list in reverse order" << endl;
		cout << "8. Show statistics" << endl;
		cout << "9. Exit to main menu" << endl;
		cin >> cmd;
		switch (cmd)
		{
		case 1: create_dnode();
			break;
		case 2: dinsert_head();
			break;
		case 3: //list_dtail_insert();
			break;
		case 4: dremove_head();
			break;
		case 5: dtail_remove();
			break;
		case 6: dlist_print();
			break;
		case 7: dlist_print_reverse();
			break;
		case 8: dlist_show_statistics();
			break;
		case 9:
			break;\
		default:
			cout << "incorrect input... Please choose a command " << endl;
		}

	} while (cmd != 9);
}

	

/*cout << "1. Create a node " << endl;
2. Insert a node to the head
3. Insert a node to the tail
4. Remove a node from the head
5. Remove a node from the tail
6. Print the list
7. Show statistics
8. Exit to main menu
*/



/*Menu
1. Singly linked list
2. Doubly linked list
3. Exit
*/

	/*node *head_ptr = NULL;
			node *p = new node(30.0, head_ptr);

			cout << p->data();*/