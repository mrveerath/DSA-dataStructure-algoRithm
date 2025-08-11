#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;

    Node(int d)
    {
        this->value = d;
        this->next = nullptr;
    }

    ~Node()
    {
        int value = this->value;
        if (this->next != nullptr)
        {
            delete next;
            this->next = nullptr;
        }
        cout << "Memory Is Free For Value : " << value << endl;
    }
};

void printList(Node *head)
{
    if (head == nullptr)
    {
        cout << "This Is The Empty Linked List" << endl;
        return;
    }
    while (head != nullptr)
    {
        cout << head->value;
        if (head->next != nullptr)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int totalLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAfter(Node *head, int value, int data)
{
    if (head == nullptr)
    {
        cout << "This Is The Empty Linked List" << endl;
        return;
    }
    Node *temp = head;
    while (temp != nullptr && temp->value != value)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAt(Node *&head, int position, int value)
{
    if (position < 0)
    {
        cout << "Invalid Position" << endl;
        return;
    }

    if (position == 0)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        return;
    }

    if (head == nullptr)
    {
        cout << "This Is The Empty Linked List" << endl;
        return;
    }

    if (position > totalLength(head))
    {
        cout << "Position Out Of Bound" << endl;
        return;
    }

    Node *prev = nullptr;
    Node *current = head;
    int index = 0;

    while (index < position)
    {
        prev = current;
        current = current->next;
        index++;
    }

    Node *newNode = new Node(value);
    newNode->next = current;
    prev->next = newNode;
}

Node *reverseRecursivelyCase2(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node *newHead = reverseRecursivelyCase2(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}

void reverseRecursivelyCase1(Node *&head, Node *previous, Node *current)
{
    if (current == nullptr)
    {
        head = previous;
        return;
    }
    Node *forward = current->next;
    reverseRecursivelyCase1(head, current, forward);
    current->next = previous;
}

Node *reverseLL(Node *&head)
{
    /*
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *prev = nullptr;
    Node *current = head;
    Node *forward = nullptr;

    while (current != nullptr)
    {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }

    return prev; */
    head = reverseRecursivelyCase2(head);
    return head;
}

Node *findMiddle(Node *&head)
{
    if (head == nullptr && head->next == nullptr)
    {
        return head;
    }

    Node *turtle = head;
    Node *rabbit = head;

    while (rabbit != nullptr || rabbit->next != nullptr)
    {
        turtle = turtle->next;
        rabbit = rabbit->next->next;
    }
    return slow;
}

Node *findMiddleApproach2(Node *&head)
{
    int middle = totalLength(head) / 2;
    int index = 0;
    Node *middle = head;
    while (index < middle)
    {
        middle = middle->next;
        index++;
    }
    return middle;
}


int main()
{
    Node *node1 = new Node(5);
    insertAfter(node1, 5, 10);
    insertAfter(node1, 10, 12);
    insertAfter(node1, 12, 14);
    insertAfter(node1, 14, 16);
    insertAfter(node1, 16, 18);

    Node *middle = findMiddle(node1);

    std::cout << "The Middle Of The Linked List Is " << middle->value << std::endl;

    cout << "Original List: ";
    printList(node1);

    node1 = reverseLL(node1);
    cout << "Reversed List: ";
    printList(node1);

    return 0;
}
