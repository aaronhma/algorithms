#pragma once

struct Node
{
  int node;
  ListNode *next;
  ListNode(&node) : node(node), next(nullptr) {}
};

class ListNode
{
public:
  ListNode() {}
  void insertHead(Node *node);
  void insertTail(Node *node);
  void prettyPrint();
  void prettyPrint(Node *node);
  Node *operator[](int index)
  {
    Node *current = this->head;

    while (index != 0 && current->next != NULL)
    {
      current = current->next;
      index--;
    }
  }

private:
  Node *head;
  Node *tail;
};
