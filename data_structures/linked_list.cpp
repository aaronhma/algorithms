/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file linked_list.cpp
 *  This tests the implementation of a Singly Linked List,and a Doubly Linked List.
 */

#include <iostream>
#include "include/linked_list/linked_list.h"

using namespace std;

void TestSinglyLinkedList()
{
  /* Singly Linked List test code */
  SLL node1;
  SLL node2;
  SLL node3;
  SLL node4;
  SLL node5;

  /* Initialize node values */
  node1.val = 1;
  node2.val = 2;
  node3.val = 3;
  node4.val = 4;
  node5.val = 5;

  /* Link the next value */
  node1.next = &node2;
  node2.next = &node3;
  node3.next = &node4;
  node4.next = &node5;

  cout << "==================== SINGLY LINKED LIST ===================="
       << "\n";
  cout << "Value of node1: " << node1.val << "\n";
  cout << "Value of node2: " << node1.next->val << "\n";
  cout << "Value of node3: " << node1.next->next->val << "\n";
  cout << "Value of node4: " << node1.next->next->next->val << "\n";
  cout << "Value of node5: " << node5.val << "\n"
       << "\n";
}

void TestDoublyLinkedList()
{
  /* Doubly Linked List test code */
  DLL doubly_node1;
  DLL doubly_node2;
  DLL doubly_node3;
  DLL doubly_node4;
  DLL doubly_node5;

  /* Initialize node values */
  doubly_node1.val = 6;
  doubly_node2.val = 7;
  doubly_node3.val = 8;
  doubly_node4.val = 9;
  doubly_node5.val = 10;

  /* Link the next value */
  doubly_node1.next = &doubly_node2;
  doubly_node2.next = &doubly_node3;
  doubly_node3.next = &doubly_node4;
  doubly_node4.next = &doubly_node5;

  /* Link the prev value */
  doubly_node2.prev = &doubly_node1;
  doubly_node3.prev = &doubly_node2;
  doubly_node4.prev = &doubly_node3;
  doubly_node5.prev = &doubly_node4;

  cout << "==================== DOUBLY LINKED LIST ===================="
       << "\n";
  cout << "Value of doubly_node1: " << doubly_node1.val << "\n";
  cout << "Value of doubly_node2: " << doubly_node1.next->val << "\n";
  cout << "Value of doubly_node3: " << doubly_node1.next->next->val << "\n";
  cout << "Value of doubly_node4: " << doubly_node1.next->next->next->val << "\n";
  cout << "Value of doubly_node5: " << doubly_node5.val << "\n";
}

int main()
{
  /* Test Singly Linked List */
  TestSinglyLinkedList();

  /* Test Doubly Linked List */
  TestDoublyLinkedList();

  return 0;
}
