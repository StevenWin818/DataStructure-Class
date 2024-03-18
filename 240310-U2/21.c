#include <stdio.h>
#define MAXSIZE 15
typedef struct{
    int data[MAXSIZE];
    int length;
} SeqList;

void InitList(SeqList *L){
    L->length = 0;
}
void AddElem(SeqList *L, int m){
    if (L->length < MAXSIZE)
    {
        L->data[L->length] = m;
        L->length++;
    }
}

int main(){
    SeqList L;
    InitList(&L);
    int i, num, count = 0;

    printf("������15��������1-100����\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &num);
        if ((num >= 100) && (num <= 1))    printf("������1-100֮�����ֵ");
        AddElem(&L, num);
        if (num == 10)    count++;
    }

    printf("��ֵΪ10�����ĸ����ǣ�%d\n", count);
    return 0;
}
