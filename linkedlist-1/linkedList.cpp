#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}

void linkedList::insertAtEnd(int x)
{
  // create new node
  node *temp = new node;
  temp -> num = x;
  temp -> next = nullptr;

  if (head == nullptr) // list is empty
  {
    head = temp;
    tail = temp;
  }
  else  // list is not empty
  {
    tail -> next = temp;
    tail = tail -> next;
  }

  count++;
}

void linkedList::print()
{
  node *temp = head;
  while (temp != nullptr)
  {
    cout << temp -> num << " ";
    temp = temp -> next;
  }
  cout << endl;
}