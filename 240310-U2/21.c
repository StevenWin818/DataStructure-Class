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

    printf("请输入15个整数（1-100）：\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &num);
        if ((num >= 100) && (num <= 1))    printf("请输入1-100之间的数值");
        AddElem(&L, num);
        if (num == 10)    count++;
    }

    printf("数值为10的数的个数是：%d\n", count);
    return 0;
}
