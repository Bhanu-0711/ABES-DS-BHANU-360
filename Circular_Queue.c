#include <stdio.h>
int front = -1, rear = -1;

void Enqueue(int a[], int n, int ele) {
    if ((front == 0 && rear == n - 1) || (rear + 1) % n == front) {
        printf("Overflow\n");
        return;
    }
    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % n;

    a[rear] = ele;
    printf("%d inserted.\n", ele);
}

void Dequeue(int a[], int n){
    if (front == -1){
        printf("Underflow\n");
        return;
    }
    printf("Element deleted is: %d\n", a[front]);
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % n;
}

void Display(int a[], int n) {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", a[i]);
        if (i == rear)
            break;
        i = (i + 1) % n;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the circular queue: ");
    scanf("%d", &n);
    int a[n];
    int choice, ele;
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
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
