
#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
private:
    int a[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    int empty()
    {
        return (top == -1);
    }

    int full()
    {
        return (top == MAX - 1);
    }

    void push(int x)
    {
        if (full())
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            a[top] = x;
        }
    }

    int pop()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        int x = a[top];
        top--;
        return x;
    }

    int peek()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return a[top];
    }

    void display()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack contents:" << endl;

        for (int i = top; i >= 0; i--)
        {
            cout << a[i] << endl;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    cout << "Popped element is: " << s.pop() << endl;

    s.display();

    return 0;
}
