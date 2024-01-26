/*
https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
*/

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    if (llist == nullptr) {
        cout << "Error: Empty list\n";
        return 0; // Assuming 0 as a default value for an empty list
    }

    int size = 0;

    SinglyLinkedListNode* temp = llist;
    while (temp != nullptr) {
        temp = temp->next;
        size++;
    }

    int pos = size - positionFromTail;

    if (pos <= 0 || pos > size) {
        cout << "Error: Invalid position\n";
        return 0; // or handle the error as appropriate
    }

    temp = llist;
    int i = 0;
    while (i < pos-1) {
        temp = temp->next;
        ++i;
    }

    return temp->data;
}