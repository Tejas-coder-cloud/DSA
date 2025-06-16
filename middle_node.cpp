#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->next=NULL;
        this->data=data;
    }
};
Node *middle(Node*&head)
{
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void print(Node*&head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node*head=new Node(20);
    head->next=new Node(30);
    head->next->next=new Node(40);
    head->next->next->next=new Node(50);
    head->next->next->next->next=new Node(60);
    head->next->next->next->next->next=new Node(70);
    Node*middle1=middle(head);
    print(head); 
    cout<<endl;
    cout<<"Middle node of the linked list is "<<middle1->data<<endl;
    return 0;
}