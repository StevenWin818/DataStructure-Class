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

    printf("请输入线性表中所含数据的个数：\n");
    scanf("%d", &n);
    printf("请输入数据表中的数：\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num);
        AddElem(&L, num);
    }

    printf("请输入两个数x和y（x<y）：\n");
    scanf("%f%f", &x, &y);
    if (x >= y)
    {
        printf("输入错误，x必须小于y。\n");
        return 0;
    }

    for (i = 0; i < n; i++)
        if (L.data[i] > x && L.data[i] < y)     count++;

    printf("有%d个数在x-y之间\n",count);

    return 0;
}
