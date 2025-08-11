#include <iostream>
using namespace std;

struct Linked_List_Node {
    int data;
    Linked_List_Node *next;

    Linked_List_Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    ~Linked_List_Node() {
        int value = this->data;
        if (this->next != nullptr) {
            delete next;
            this->next = nullptr;
        }
        cout << "Memory Is Free For Value : " << value << endl;
    }
};

void insert_at_head(Linked_List_Node *&head, int d) {
    Linked_List_Node *temp = new Linked_List_Node(d);
    temp->next = head;
    head = temp;
}

void insert_at_tail(Linked_List_Node *&head, int d) {
    Linked_List_Node *temp = new Linked_List_Node(d);
    if (head == nullptr) {
        head = temp;
        return;
    }
    Linked_List_Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = temp;
}

void insert_at_position(Linked_List_Node *&head, int position, int value) {
    Linked_List_Node *temp = new Linked_List_Node(value);
    if (position == 0) {
        temp->next = head;
        head = temp;
        return;
    }
    Linked_List_Node *current = head;
    int index = 0;
    while (current != nullptr && index < position - 1) {
        current = current->next;
        index++;
    }
    if (current == nullptr) {
        cout << "Invalid position: " << position << endl;
        delete temp;
        return;
    }
    temp->next = current->next;
    current->next = temp;
}

void delete_node_by_position(Linked_List_Node *&head, int position) {
    if (!head || position < 1) return;
    if (position == 1) {
        Linked_List_Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return;
    }
    Linked_List_Node *curr = head;
    for (int i = 1; curr && i < position - 1; ++i) {
        curr = curr->next;
    }
    if (!curr || !curr->next) return;
    Linked_List_Node *toDelete = curr->next;
    curr->next = curr->next->next;
    toDelete->next = nullptr;
    delete toDelete;
}

void delete_node_by_value(Linked_List_Node *&head, int value) {
    while (head && head->data == value) {
        Linked_List_Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }
    Linked_List_Node *curr = head;
    while (curr && curr->next) {
        if (curr->next->data == value) {
            Linked_List_Node *temp = curr->next;
            curr->next = curr->next->next;
            temp->next = nullptr;
            delete temp;
            return;
        }
        curr = curr->next;
    }
}

int total_length(Linked_List_Node *&head) {
    Linked_List_Node *temp = head;
    int len = 0;
    while (temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}

void print_linked_list(Linked_List_Node *head) {
    Linked_List_Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Linked_List_Node *head = nullptr;

    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    insert_at_head(head, 3);
    insert_at_head(head, 2);

    print_linked_list(head);

    int length_of_linked_list = total_length(head);
    cout << "The Total Length Of The Linked List Is : " << length_of_linked_list << endl;

    delete_node_by_position(head, 3);
    print_linked_list(head);

    delete_node_by_value(head, 2);
    print_linked_list(head);

    return 0;
}