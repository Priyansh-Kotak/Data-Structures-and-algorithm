#include<iostream>
using namespace std;
#include <conio.h>
#define size 5
struct queue
{
    int s[size];
    int front;
    int rear;
} q;
int q_full()
{
    if (q.front == (q.rear + 1) % size)
        return 1;
    else
        return 0;
}
int q_empty()
{
    if (q.front == -1)
        return 1;
    else
        return 0;
}
void q_insert(int item)
{
    if (q.front == -1)
        q.front = q.rear = 0;
    else
        q.rear = (q.rear + 1) % size;
    q.s[q.rear] = item;
}
int q_delete()
{
    int item;
    item = q.s[q.front];
    if (q.front == q.rear)
        q.front = q.rear = -1;
    else
        q.front = (q.front + 1) % size;
    return (item);
}
void display()
{
    int i;
    if (q.rear == -1)
        cout << "\n queue empty";
    else
    {
        i = q.front;
        while (i != q.rear)
        {
            cout << "\n";
            cout << q.s[i];
            i = (i + 1) % size;
        }
        cout << "\n"
             << q.s[i];
    }
}
int main()
{
    int item, choice;
    // clrscr();
    q.front = -1;
    q.rear = -1;
    do
    {
        cout << "\n1.insertion\n2.deletion\n3.display\n4.exit";
        cout << "\n enter ur choice";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            if (q_full() == 1)
            {
                cout << "\ninsertion is not possible:";
                break;
            }
            else
                cout << "\nenter the item u want to insert:";
            cin >> item;
            q_insert(item);
            break;
        }
        case 2:
        {
            if (q_empty() == 1)
                cout << "\ndeletion not possibnle";
            else
            {
                item = q_delete();
                cout << "\nthe deleted item is:";
                cout << item;
            }
            break;
        }
        case 3:
        {
            if (q_empty() == 1)
            {
                cout << "\nqueue  is empty";
            }
            display();
            break;
        }
        }
    } while (choice <= 3);
}
