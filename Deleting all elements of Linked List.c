void deleteAll(struct Node* head) {
    if (head == NULL)
        return;
    deleteAll(head->next);
    free(head);
}
