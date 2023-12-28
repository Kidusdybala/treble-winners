#include <iostream>
#include <cstdlib>

using namespace std;

struct studentnode {
    string name;
    int id;
    double gpa;
    studentnode* next;
};

studentnode* startptr = NULL;

void displayll() {
    if (startptr == NULL) {
        cout << "SLL is empty" << endl;
    } else {
        studentnode* temp = startptr;
        cout << "startptr->";
        while (temp != NULL) {
            cout << "|" << temp->name << ":" << temp->id << ":" << temp->gpa << "|->";
            temp = temp->next;
        }
        cout << endl;
    }
}

void createnewnode() {
    studentnode* newnode = new studentnode;
    cout << "Enter name: ";
    cin >> newnode->name;
    cout << "Enter ID: ";
    cin >> newnode->id;
    cout << "Enter GPA: ";
    cin >> newnode->gpa;
    newnode->next = NULL;

    if (startptr == NULL) {
        startptr = newnode;
        cout << "New node is created successfully." << endl;
    } else {
        studentnode* temp = startptr;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        cout << "New node is inserted successfully." << endl;
    }
}

void insertnewnodeathead() {
    studentnode* newnode = new studentnode;
    cout << "Enter name: ";
    cin >> newnode->name;
    cout << "Enter ID: ";
    cin >> newnode->id;
    cout << "Enter GPA: ";
    cin >> newnode->gpa;
    newnode->next = NULL;

    if (startptr == NULL) {
        startptr = newnode;
        cout << "New node is inserted at the head of SLL successfully." << endl;
    } else {
        newnode->next = startptr;
        startptr = newnode;
        cout << "New node is inserted at the head of SLL successfully." << endl;
    }
}

void insertnewnodeattail() {
    studentnode* newnode = new studentnode;
    cout << "Enter name: ";
    cin >> newnode->name;
    cout << "Enter ID: ";
    cin >> newnode->id;
    cout << "Enter GPA: ";
    cin >> newnode->gpa;
    newnode->next = NULL;
    if (startptr == NULL) {
        startptr = newnode;
        cout << "New node is inserted at the tail of SLL successfully." << endl;
    } else {
        studentnode* temp = startptr;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        cout << "New node is inserted at the tail of SLL successfully." << endl;
    }
}

void insertnewnodeatanypos() {
    studentnode* newnode = new studentnode;
    cout << "Enter name: ";
    cin >> newnode->name;
    cout << "Enter ID: ";
    cin >> newnode->id;
    cout << "Enter GPA: ";
    cin >> newnode->gpa;
    newnode->next = NULL;

    if (startptr == NULL) {
        startptr = newnode;
        cout << "New node is inserted at the tail of SLL successfully." << endl;
    } else {
        studentnode* temp = startptr;
        int count = 0, pos;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout << "Enter position (1-" << count << "): ";
        cin >> pos;
        
        if (pos >= 1 && pos <= count) {
            studentnode* temp1 = startptr;
            studentnode* temp2;

            for (int i = 1; i < pos; i++) {
                temp1 = temp1->next;
            }
            
            temp2 = temp1->next;
            temp1->next = newnode;
            newnode->next = temp2;
            
            cout << "New node is inserted at position " << pos << " of SLL successfully." << endl;
        } else {
            cout << "Invalid position. Please enter a valid position." << endl;
        }
    }
}int main() {
    while (true) {
        cout << "Menu for SLL basic operations" << endl;
        cout << "Press 1 to create a new node" << endl;
        cout << "Press 2 to display the SLL info" << endl;
        cout << "Press 3 to insert a newnode at the head of the SLL" << endl;
        cout << "Press 4 to insert a new node at the tail of the SLL" << endl;
        cout << "Press 5 to insert a new node at a specific position in the SLL" << endl;
        cout << "Press 0 to exit the program" << endl;
        int ch;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                createnewnode();
                break;
            case 2:
                displayll();
                break;
            case 3:
                insertnewnodeathead();
                break;
            case 4:
                insertnewnodeattail();
                break;
            case 5:
                insertnewnodeatanypos();
                break;
            case 0:
                exit(0);
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    }
}