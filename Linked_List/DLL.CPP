#include <iostream>
using namespace std;

// Doubly Linked List Node
struct DLL
{
    int data;
    DLL *next;
    DLL *prev;

    DLL(int d)
    {
        this->data = d;
        this->next = nullptr;
        this->prev = nullptr;
    }
    ~DLL(){

    }
};

// Get length of DLL
int getLength(DLL *head)
{
    int len = 0;
    DLL *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// Print DLL
void print(DLL *head)
{
    DLL *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Insert at Head
void insertAtHead(DLL *&head, int data)
{
    DLL *newNode = new DLL(data);
    newNode->next = head;
    newNode->prev = nullptr;

    if (head != nullptr)
    {
        head->prev = newNode;
    }

    head = newNode;
}

// Insert at Tail (traverse from head)
void insertAtTail(DLL *&head, int data)
{
    DLL *newNode = new DLL(data);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    DLL *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at a given position (1-indexed)
void insertAtPosition(DLL *&head, int position, int data)
{
    if (position <= 0)
    {
        cout << "❌ Invalid position" << endl;
        return;
    }

    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    DLL *temp = head;
    int index = 1;

    while (temp != nullptr && index < position - 1)
    {
        temp = temp->next;
        index++;
    }

    if (temp == nullptr)
    {
        cout << "❌ Position out of bounds" << endl;
        return;
    }

    if (temp->next == nullptr)
    {
        insertAtTail(head, data);
        return;
    }

    DLL *newNode = new DLL(data);
    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteByPosition(DLL *&head, int position)
{
    if (position <= 0)
    {
        cout << "❌ Invalid position" << endl;
        return;
    }

    if (head == nullptr)
    {
        cout << "❌ List is empty" << endl;
        return;
    }

    if (position == 1)
    {
        DLL *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        delete temp;
        return;
    }

    DLL *temp = head;
    int index = 1;

    while (temp != nullptr && index < position)
    {
        temp = temp->next;
        index++;
    }

    if (temp == nullptr)
    {
        cout << "❌ Position out of bounds" << endl;
        return;
    }

    if (temp->prev != nullptr)
    {
        temp->prev->next = temp->next;
    }

    if (temp->next != nullptr)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void deleteByValue(DLL *&head, int value)
{
    DLL *temp = head;
    while (temp != nullptr && temp->data != value)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "❌ Value not found in the list." << endl;
        return;
    }
    if (temp->prev == nullptr)
    {
        head = temp->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        delete temp;
        return;
    }
    if (temp->next == nullptr)
    {
        temp->prev->next = nullptr;
        delete temp;
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}
// Main function to test

Node *reverseDLL(DLL *&head){
    if (head == nullptr || head -> next == nullptr)
    {
        return head;
    }
    DLL *current = head;
    DLL *next = nullptr;
    DLL *prev = null;

    while (current != nullptr)
    {
       forward = current -> next;
       current -> next = prev;
       prev = current;
       current = forward;
    }
    
    
}

int main()
{
    DLL *head = nullptr;

    insertAtHead(head, 10);
    print(head); // 10

    insertAtHead(head, 5);
    print(head); // 5 <-> 10

    insertAtTail(head, 20);
    print(head); // 5 <-> 10 <-> 20

    insertAtPosition(head, 2, 7);
    print(head); // 5 <-> 7 <-> 10 <-> 20

    insertAtPosition(head, 1, 1);
    print(head); // 1 <-> 5 <-> 7 <-> 10 <-> 20

    insertAtPosition(head, 10, 99); // out of bounds
    print(head);

    cout << "Length of DLL: " << getLength(head) << endl;

    return 0;
}
