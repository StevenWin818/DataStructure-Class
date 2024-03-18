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
        printf("内存分配失败\n");
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
int countOddNodes(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data % 2 != 0)    count++;
        temp = temp->next;
    }
    return count;
}
void changeOddNodes(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data % 2 != 0)
        {
            temp->data = 996;
        }
        temp = temp->next;
    }
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    Node *head = NULL;
    int data, n, i;
    printf("请输入要插入的结点数量：");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个结点的值：", i + 1);
        scanf("%d", &data);
        head = insertNode(head, data);
    }
    printList(head);
    int oddCount = countOddNodes(head);
    printf("奇数结点的数量为：%d\n", oddCount);
    changeOddNodes(head);
    printList(head);
    return 0;
}