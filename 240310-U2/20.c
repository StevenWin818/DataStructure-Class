#include <stdio.h>
#define MAXSIZE 100
typedef struct{
    float data[MAXSIZE];
    int length;
} SeqList;
void InitList(SeqList *L){
    L->length = 0;
}
void AddElem(SeqList *L, float e){
    if (L->length < MAXSIZE)
    {
        L->data[L->length] = e;
        L->length++;
    }
}
int main(){
    SeqList L;
    InitList(&L);

    int i, n;
    float num, x, y;
    int count = 0;

    printf("���������Ա����������ݵĸ�����\n");
    scanf("%d", &n);
    printf("���������ݱ��е�����\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num);
        AddElem(&L, num);
    }

    printf("������������x��y��x<y����\n");
    scanf("%f%f", &x, &y);
    if (x >= y)
    {
        printf("�������x����С��y��\n");
        return 0;
    }

    for (i = 0; i < n; i++)
        if (L.data[i] > x && L.data[i] < y)     count++;

    printf("��%d������x-y֮��\n",count);

    return 0;
}
