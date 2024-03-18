#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        printf("error\n");
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node *insertNode(Node *head, int data)
{
    Node *newNode = createNode(data);
    if (head == NULL)    head = newNode;
    else
    {
        Node *temp = head;
        while (temp->next != NULL)    temp = temp->next;
        temp->next = newNode;
    }
    return head;
}
int countEvenNodes(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)    count++;
        temp = temp->next;
    }
    return count;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    int data, n, i;
    printf("������Ҫ����Ľ��������");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("�������%d������ֵ��", i + 1);
        scanf("%d", &data);
        head = insertNode(head, data);
    }
    int evenCount = countEvenNodes(head);
    if (evenCount % 2 != 0)
    {
        printf("ż����������Ϊ�������������½���ֵ��\n");
        scanf("%d", &data);
        head = insertNode(head, data);
        printList(head);
    }
    return 0;
}