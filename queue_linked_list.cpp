
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class queue
{
    private:
    node *front;
    node *rear;

    public:
    queue()
    {
        front=NULL;
        rear=NULL;
    }

    int empty()
    {
        if(front==NULL)
            return(1);
        else
            return(0);
    }

    void enqueue(int x)
    {
        node *temp=new node(x);

        if(empty())
        {
            front=rear=temp;
            return;
        }

        rear->next=temp;
        rear=temp;
    }

    int dequeue()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int x=front->data;
        node *temp=front;
        front=front->next;

        if(front==NULL)
            rear=NULL;

        delete temp;
        return x;
    }

    int peek()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        return front->data;
    }

    void display()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }

        node *temp=front;

        while(temp!=NULL)
        {
            cout<<"\t"<<temp->data;
            temp=temp->next;
        }

        cout<<endl;
    }
};

int main()
{
    queue q;
    int x;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"Current Queue:"<<endl;
    q.display();

    x=q.peek();
    cout<<"Front element is "<<x<<endl;

    x=q.dequeue();
    cout<<"Removed "<<x<<endl;

    cout<<"Queue after removal:"<<endl;
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}
