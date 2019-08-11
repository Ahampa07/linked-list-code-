#include <iostream>
using namespace std;

struct Node
{
   int data;
   Node* next;

};
Node* head;

void insert(int x)
{
    Node* temp= new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
    
}
void Insert(int x, int n)
{
    Node* temp2=new Node;
    temp2->data=x;
    temp2->next=NULL;
    
    Node* temp1=head;
    for (int i=0; i<n-2; i++)
    {
        temp1=temp1->next;
    }
    temp2->next=temp1->next;
    temp1->next=temp2;
    
}
void print ()
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout << temp->data<< " ";
        temp=temp->next;
    }
    cout << endl;
}
//void reverse ()
void Delete(int n)
{
   Node* temp1=head;
   for (int i=0;i<n-2;i++)
   {
       temp1=temp1->next;
   }
   Node* temp2=temp1->next;
   temp1->next=temp2->next;
   free(temp2);
}
int main()
{
  head=NULL;
  int i,n;
  cin >> n;
  for (i=0;i<n;i++)
  {
      int x;
      cin >> x;
      insert(x);
  }
  print();
  Delete(4);
  print();
  Insert(10,3);
  print();
	return 0;
}