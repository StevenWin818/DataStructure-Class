#include <stdio.h>
#define MAXSIZE 100
typedef struct{
    int data[MAXSIZE];
    int length;
} SeqList;
void InitList(SeqList *L){
    L->length = 0;
}
void AddElem(SeqList *L, int e){
    if (L->length < MAXSIZE)
    {
        L->data[L->length] = e;
        L->length++;
    }
}

int main(){
    SeqList L;
    InitList(&L);

    int i, n, num;

    printf("���������Ա����������ݵĸ�����\n");
    scanf("%d", &n);
    printf("���������ݱ��е�����\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)    num = 996;
        AddElem(&L, num);
    }

    printf("���ݱ�Ϊ��\n");
    for (i = 0; i < n; i++)    printf("%d ", L.data[i]);

    return 0;
}
