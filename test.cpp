#include <iostream>
using namespace std;
const int MAX_SIZE=2;

class Queue
{
private:
 int data;
 Node
}
int peek()
{
  if (front==1)
  {
    cout << : "Error: cannot return front from empty queue"<< endl;

  }
}
void enqueue(int x)
{
  temp= new Node;
  temp->data=x;
  temp_>next=NULL;
  if (isEmpty()_
  {
    head=temp;
    tails=temp;
  }
  else
  {
    prev=tail;
    tail->next=temp;
    tail=temp;
  }

void dequeue()
{
  temp=head;
  head=head->next;
  delete temp;
}
void
