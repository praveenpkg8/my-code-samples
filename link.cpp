#include <iostream>
 using namespace std;

 main( )
{

void createnode(int data)
{
	 	 struct node
 {
 	int d;
 	struct node *next;
 	
}s; 
	node *temp=new node;
	temp->d=data;
	temp->next=NULL;
	if(head=NULL)
	{
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}
public class list
	{
		node *head,*tail;
		list()
		{
			head=NULL;
			tail=NULL;
		}
	}
void display()
{
	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}
	
	int x;
	list s;
	cin>>x;
	createnode(x);
	display();

}
