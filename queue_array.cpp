
#include<iostream>
using namespace std;

#define MAX 5

class queue
{
private:
    int a[MAX];
    int front, rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }

    int empty()
    {
        return (front == -1);
    }

    int full()
    {
        return (rear == MAX - 1);
    }

    void enqueue(int x)
    {
        if(full())
        {
            cout << "queue is full" << endl;
        }
        else
        {
            if(front == -1)
                front = 0;

            rear++;
            a[rear] = x;
        }
    }

    int dequeue()
    {
        if(empty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        int x = a[front];

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }

        return x;
    }

    int peek()
    {
        if(empty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        return a[front];
    }

    void display()
    {
        if(empty())
        {
            cout << "queue is empty" << endl;
            return;
        }

        for(int i = front; i <= rear; i++)
            cout << a[i] << "\t";

        cout << endl;
    }
};

int main()
{
    queue q;

    if(!q.full()) q.enqueue(10);
    else cout << "queue is full" << endl;

    cout << "queue contents after enqueue operation:" << endl;
    q.display();

    if(!q.full()) q.enqueue(20);
    else cout << "queue is full" << endl;

    cout << "queue contents after enqueue operation:" << endl;
    q.display();

    if(!q.full()) q.enqueue(30);
    else cout << "queue is full" << endl;

    cout << "queue contents after enqueue operation:" << endl;
    q.display();

    if(!q.full()) q.enqueue(40);
    else cout << "queue is full" << endl;

    cout << "queue contents after enqueue operation:" << endl;
    q.display();

    if(!q.full()) q.enqueue(50);
    else cout << "queue is full" << endl;

    cout << "queue contents after enqueue operation:" << endl;
    q.display();

    if(!q.full()) q.enqueue(60);
    else cout << "queue is full" << endl;

    cout << "queue contents after enqueue operation:" << endl;
    q.display();

    cout << "Front element is " << q.peek() << endl;

    for(int i = 0; i < 6; i++)
    {
        if(q.empty())
            cout << "queue is empty" << endl;
        else
            cout << "dequeued element is " << q.dequeue() << endl;

        cout << "queue contents after dequeue operation:" << endl;
        q.display();
    }

    return 0;
}
