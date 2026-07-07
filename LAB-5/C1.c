// Given the root of a Binary Search Tree (BST) of size n and an integer target, determine whether there exists a pair of distinct nodes in the BST 
// such that the sum of their values is equal to the given target using in order traversal. Return true if such a pair exists; otherwise, return false. 
 
// Example: 
 
// Input: root = [7, 3, 8, 2, 4, N, 9], target = 12 
// Output: true 
// Explanation: In the given binary tree, there are two nodes (3 and 9) that add up to 12.\

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}
void inorderTraversal(struct Node* root, int arr[], int *index) {
    if (root == NULL)
        return;

    inorderTraversal(root->left, arr, index);
    arr[(*index)++] = root->data;
    inorderTraversal(root->right, arr, index);
}

int TwoSum(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Pair Found: %d + %d = %d\n",
                   arr[left], arr[right], target);
            return 1;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }

    return 0;
}

int main() {
    struct Node* root = NULL;

    int n, value, target;
    int arr[100];
    int index = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter BST elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    inorderTraversal(root, arr, &index);

    if (!TwoSum(arr, index, target))
        printf("No pair exists with sum %d.\n", target);

    return 0;
}