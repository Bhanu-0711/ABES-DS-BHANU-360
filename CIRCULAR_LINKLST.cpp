#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* start = NULL;
node* last = NULL;

node* getNode(int x) {
    node* p = new node();
    p->data = x;
    p->next = NULL;
    return p;
}

void Traversal(node* start) {
    if (start == NULL) {
        cout << "List is empty\n";
        return;
    }
    node* p = start;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != start);
    cout << endl;
}

int CountNodes(node* start) {
    if (!start) return 0;
    int cnt = 0;
    node* temp = start;
    do {
        cnt++;
        temp = temp->next;
    } while (temp != start);
    return cnt;
}

node* Insbeg(node* start, int x) {
    node* p = getNode(x);
    if (!start) {
        start = p;
        last = p;
        p->next = start;
    } else {
        p->next = start;
        last->next = p;
        start = p;
    }
    return start;
}

node* Insend(node* start, int x) {
    node* p = getNode(x);
    if (!start) {
        start = p;
        last = p;
        p->next = start;
    } else {
        last->next = p;
        p->next = start;
        last = p;
    }
    return start;
}

node* Insafter(node* start, int key, int x) {
    if (!start) {
        cout << "List empty\n";
        return start;
    }
    node* temp = start;
    do {
        if (temp->data == key) {
            node* p = getNode(x);
            p->next = temp->next;
            temp->next = p;
            if (temp == last) last = p;
            return start;
        }
        temp = temp->next;
    } while (temp != start);
    cout << "Key not found\n";
    return start;
}

node* Delbeg(node* start) {
    if (!start) {
        cout << "Nothing to delete\n";
        return start;
    }
    node* temp = start;
    cout << "Deleted: " << temp->data << endl;
    if (start == last) {
        delete temp;
        start = last = NULL;
        return start;
    }
    start = start->next;
    last->next = start;
    delete temp;
    return start;
}

node* Delend(node* start) {
    if (!start) {
        cout << "Nothing to delete\n";
        return start;
    }
    if (start == last) {
        cout << "Deleted: " << start->data << endl;
        delete start;
        start = last = NULL;
        return start;
    }
    node* temp = start;
    while (temp->next != last) temp = temp->next;
    cout << "Deleted: " << last->data << endl;
    delete last;
    last = temp;
    last->next = start;
    return start;
}

node* Delafter(node* start, int key) {
    if (!start) {
        cout << "List empty\n";
        return start;
    }
    node* temp = start;
    do {
        if (temp->data == key && temp->next != start) {
            node* del = temp->next;
            cout << "Deleted: " << del->data << endl;
            temp->next = del->next;
            if (del == last) last = temp;
            delete del;
            return start;
        }
        temp = temp->next;
    } while (temp != start);
    cout << "Key not found or last node cannot be deleted after itself\n";
    return start;
}

void searchNode(node* start, int x) {
    if (!start) {
        cout << "Empty list\n";
        return;
    }
    node* p = start;
    do {
        if (p->data == x) {
            cout << "Element found\n";
            return;
        }
        p = p->next;
    } while (p != start);
    cout << "Element not found\n";
}

int main() {
    int ch, x, key;
    do {
        cout << "\n1. Traverse & Count\n2. Insert at Start\n3. Insert after a Node\n4. Insert at End\n";
        cout << "5. Delete at Start\n6. Delete at End\n7. Delete after a Node\n8. Search Element\n9. Exit\n";
        cin >> ch;
        switch (ch) {
            case 1:
                Traversal(start);
                cout << "No. of elements: " << CountNodes(start) << endl;
                break;
            case 2:
                cout << "Enter data: "; cin >> x;
                start = Insbeg(start, x);
                break;
            case 3:
                cout << "Enter key and data: "; cin >> key >> x;
                start = Insafter(start, key, x);
                break;
            case 4:
                cout << "Enter data: "; cin >> x;
                start = Insend(start, x);
                break;
            case 5:
                start = Delbeg(start);
                break;
            case 6:
                start = Delend(start);
                break;
            case 7:
                cout << "Enter key: "; cin >> key;
                start = Delafter(start, key);
                break;
            case 8:
                cout << "Enter element to search: "; cin >> x;
                searchNode(start, x);
                break;
            case 9:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (ch != 9);
}
