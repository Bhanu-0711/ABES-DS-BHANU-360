#include <stdio.h>
int front = -1, rear = -1;

void Enqueue(int a[], int n, int ele) {
    if (rear == n - 1) {
        printf("Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    a[rear] = ele;
    printf("%d inserted.\n", ele);
}

void Dequeue(int a[], int n) {
    if (front == -1 || front > rear) { 
        printf("Underflow\n");
        front = rear = -1;
        return;
    }
    printf("Element deleted is: %d\n", a[front]);
    front++;
    if (front > rear) { 
        front = rear = -1;
    }
}

void Display(int a[], int n) {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the queue: ");
    scanf("%d", &n);
    int a[n];
    int choice, ele;

    do {
        printf("\n--Queue Operations--\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &ele);
                Enqueue(a, n, ele);
                break;
            case 2:
                Dequeue(a, n);
                break;
            case 3:
                Display(a, n);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
