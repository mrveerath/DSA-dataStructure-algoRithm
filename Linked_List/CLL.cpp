#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }

    ~Node() {
        int value = this->data;
        this->next = nullptr; 
        cout << "The Value " << value << " Of Node Is Deleted\n";
    }
};

void insertNode(Node*& tail, int element, int value) {
    Node* newNode = new Node(value);

    if (tail == nullptr) {
        tail = newNode;
        newNode->next = newNode;
        return;
    }

    Node* current = tail;
    do {
        if (current->data == element) {
            newNode->next = current->next;
            current->next = newNode;
            if (current == tail) {
                tail = newNode;
            }
            return;
        }
        current = current->next;
    } while (current != tail);

    cout << "Element " << element << " not found in the list.\n";
}

int len(Node* tail) {
    if (tail == nullptr) return 0;

    int count = 1;
    Node* temp = tail->next;
    while (temp != tail) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print(Node* tail) {
    if (tail == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = tail->next;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << "(back to " << tail->next->data << ")\n";
}

void deleteNodeByValue(Node*& tail, int element) {
    if (tail == nullptr) {
        cout << "The List Is Empty\n";
        return;
    }

    Node* prev = tail;
    Node* curr = tail->next;

    while (curr->data != element) {
        if (curr == tail) {
            cout << "Element not found in the list\n";
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;

    if (curr == prev) {
        tail = nullptr;
    } else if (curr == tail) {
        tail = prev;
    }

    delete curr;
}

void deleteNodeByPosition(Node*& tail, int position) {
    if (tail == nullptr) {
        cout << "The List Is Empty\n";
        return;
    }

    int length = len(tail);
    if (position < 1 || position > length) {
        cout << "Position Out Of Bound\n";
        return;
    }

    Node* prev = tail;
    Node* curr = tail->next;

    int count = 1;
    while (count < position) {
        prev = curr;
        curr = curr->next;
        count++;
    }

    prev->next = curr->next;

    if (curr == prev) {
        tail = nullptr;
    } else if (curr == tail) {
        tail = prev;
    }

    delete curr;
}

bool isCircular(Node *& tail){

    if(tail -> next == nullptr){
        return false;
    }

    Node * temp = tail -> next;
    while (temp != nullptr && temp -> next != nullptr)
    {
        temp= temp -> next;
    }
    if(temp == tail){
        return true;
    }
    else{
        return false;
    }  
}

int main() {
    Node* tail = nullptr;

    insertNode(tail, 4, 4); // first node
    insertNode(tail, 4, 5);
    insertNode(tail, 5, 6);
    insertNode(tail, 6, 7);
    print(tail);

    cout << "Length: " << len(tail) << endl;

    deleteNodeByValue(tail, 6);
    print(tail);

    deleteNodeByPosition(tail, 1);
    print(tail);

    return 0;
}
