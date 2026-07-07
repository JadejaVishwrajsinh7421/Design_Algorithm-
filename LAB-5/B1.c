// Write a program to implement binary search algorithm using linked list and recursive method.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Count total nodes
int countNodes(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Recursive Binary Search
int BinarySearchRecursive(struct Node* head, int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    struct Node* current = head;
    for (int i = 0; i < mid; i++) {
        current = current->next;
    }

    if (current->data == key)
        return mid;
    else if (current->data < key)
        return BinarySearchRecursive(head, mid + 1, high, key);
    else
        return BinarySearchRecursive(head, low, mid - 1, key);
}

int main() {
    int n, data, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newNode;

    printf("Enter %d elements in sorted order:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &data);

        newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int size = countNodes(head);

    int result = BinarySearchRecursive(head, 0, size - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found.\n");

    return 0;
}