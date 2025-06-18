#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next=NULL;
    Node(int data)
    {
        this->data=data;
        this->next=next;
    }
};
void print(Node*&head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node*reverse(Node*&head)
{
    Node*prev=NULL;
    Node*curr=head;
    Node*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    print(head);
    head=reverse(head);
    cout<<"Reversed linked list is :";
    print(head);
    return 0;
}