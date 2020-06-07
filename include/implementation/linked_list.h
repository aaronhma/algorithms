/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file linked_list.h
 *  This file includes the implementation of a Singly Linked List,and a Doubly Linked List.
 */

#ifndef INCLUDE_LINKED_LIST_H_
#define INCLUDE_LINKED_LIST_H_

#ifndef LINKED_LIST_MACROS_
#define LINKED_LIST_MACROS_

#define SLL SinglyLinkedList
#define DLL DoublyLinkedList

#endif // LINKED_LIST_MACROS_

#ifndef SINGLY_LINKED_LIST_
#define SINGLY_LINKED_LIST_
/* Implementation of Singly Linked List */
struct SinglyLinkedList
{
  int val;
  SinglyLinkedList *next;
};

#endif // SINGLY_LINKED_LIST_

#ifndef DOUBLY_LINKED_LIST_
#define DOUBLY_LINKED_LIST_
/* Implementation of Doubly Linked List */
struct DoublyLinkedList
{
  int val;
  DoublyLinkedList *next;
  DoublyLinkedList *prev;
};

#endif // DOUBLY_LINKED_LIST_

#endif // INCLUDE_LINKED_LIST_H_
