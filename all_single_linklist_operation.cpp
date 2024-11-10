#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *head = 0;

void createLinkedList() {
    int input;
    cout << "If you want to create a linked list type 1: ";
    cin >> input;

    while (input) {
        node *newnode = new node();
        cout << "Enter data: ";
        cin >> newnode->data;

        newnode->next = 0;
        if (head == 0) {
            head = newnode;
        } else {
            node *temp = head;
            while (temp->next != 0) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cout << "Do you want to continue? (1 for yes, 0 for no): ";
        cin >> input;
    }
}

void insertAtBeginning(int data) {
    node *newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insertAtEnding(int data) {
    node *newnode = new node();
    newnode->data = data;
    newnode->next = 0;
    node *temp = head;
    while (temp->next != 0) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtAnyPosition(int data, int position) {
    node *newnode = new node();
    newnode->data = data;

    if (position == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }

    node *temp = head;
    for (int i = 1; i < position - 1 && temp != 0; i++) {
        temp = temp->next;
    }

    if (temp == 0) {
        cout << "Position out of bounds. Inserting at the end instead." << endl;
        insertAtEnding(data);
    } else {
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void displayLinkedList() {
    if (head == 0) {
        cout << "The linked list is empty." << endl;
        return;
    }

    cout << "Linked List: ";
    node *current = head;
    while (current != 0) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    createLinkedList();
    displayLinkedList();

    int newData;
    cout << "Enter data to insert at the beginning: ";
    cin >> newData;
    insertAtBeginning(newData);
    displayLinkedList();

    int lastData;
    cout << "Enter data to insert at the ending: ";
    cin >> lastData;
    insertAtEnding(lastData);
    displayLinkedList();

    int data, position;
    cout << "Enter data to insert at any position: ";
    cin >> data;
    cout << "Enter position to insert at: ";
    cin >> position;
    insertAtAnyPosition(data, position);
    displayLinkedList();

    return 0;
}