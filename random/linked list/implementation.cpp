#include<cstdio>
#include<cstdlib>
#include<iostream>

void Insert(int a);
void Print();

void Insert(int a)
{
    struct node* temp= new node();

    temp->data=x;
    temp->next=NULL;
    temp->next=head;
    head=temp;
}


struct node()
{
    int data;
    node* next;
};

struct node* head;

int main()
{
    head=NULL;

    cout<<"How many Numbers?"<<endl;

    int n,x;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the "<<i+1<<"th number."<<endl;

        scanf("%d", &x);

        Insert(x);
        Print();
    }

    return 0;
}
