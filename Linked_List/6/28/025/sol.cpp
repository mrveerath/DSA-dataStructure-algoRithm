#include <stdio.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next = nullptr;

    Node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != nullptr)
        {
            delete this->next;
            this->next = nullptr;
        }
        cout << "Deleted Memory For The " << value << endl;
    }
};

Node *reverseInKGroups(Node *&head, int k)
{
    if (head == nullptr || head->next == nullptr || k <= 1)
    {
        return head;
    }
    // Step 1: Check if there are at least k nodes left
    Node *temp = head;
    int count = 0;
    while (temp != nullptr && count < k)
    {
        temp = temp->next;
        count++;
    }

    if (count < k)
    {
        return head;
    }
    int index = 0;
    Node *prev = nullptr;
    Node *current = head;
    Node *forward = nullptr;
    while (index < k)
    {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        index++;
    }
    if (forward != nullptr)
    {
        head->next = reverseInKGroups(forward, k);
    }
    return prev;
}

int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    delete head;

    return 0;
}