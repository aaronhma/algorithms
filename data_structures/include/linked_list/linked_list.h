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
#pragma once

#define SLL SinglyLinkedList
#define DLL DoublyLinkedList

/* Implementation of Singly Linked List */
struct SinglyLinkedList
{
  int val;
  SinglyLinkedList *next;
};

/* Implementation of Doubly Linked List */
struct DoublyLinkedList
{
  int val;
  DoublyLinkedList *next;
  DoublyLinkedList *prev;
};
