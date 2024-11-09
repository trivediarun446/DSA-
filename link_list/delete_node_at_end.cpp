// Create a cpp programe to delete the node at the end of linked list

#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
  int data;
  node *next;
  node(int val)
  {
    data = val;
    next = NULL;
  }
};

int main()
{
  int size;
  cout << " enter the size of linked list " << endl;

  cin >> size;
  cout << "enter the element which you want to insert into the linked list " << endl;
  vector<int> vec(size);
  for (int i = 0; i < size; i++)
  {
    cin >> vec[i];
  }
  cout << "Your input linked list are :" << endl;
  node *head = NULL;

  for (int i = 0; i < vec.size(); i++)
  {
    if (head == NULL)
    {
      head = new node(vec[i]);
    }
    else
    {
      node *tail = head;
      while (tail->next != NULL)
      {
        tail = tail->next;
      }
      node *temp;
      temp = new node(vec[i]);
      tail->next = temp;
    }
    
  }
  node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " " << temp->next << endl;
      temp = temp->next;
    }

  // Delete node 

  if(head != NULL)
  {

    //  check only one node is present 
    if (head->next == NULL)
    {
      delete head ; 
      head = NULL ; 
    }
    // If more than one nodes are present 
    else 
    {
      node *current = head ; 
      node *pre = NULL ; 
      while (current->next != NULL)
      {
        pre = current ;
        current = current->next ; 
        
      }
      pre->next= current->next ;
      delete current ; 
      
    }
    
  }
    node *tempc = head ; 
  while( tempc != NULL)
  {
    cout<< tempc->data << "  " << tempc->next << endl ; 
    tempc = tempc->next ; 
  }

}