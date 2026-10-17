#include "creatbook.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//创建链表
struct Device *Creat(struct Device *pHead)
{
    return add( pHead );
}

//添加设备
struct Device *add(struct Device *pHead)
{
    struct Device *pNode = NULL;
    struct Device *pLast = pHead;
    char cName[100];
    int id;
    int status;

    printf("device id:");
    if(scanf("%d", &id) != 1 || id <= 0)
    {
        printf("invalid id!\n");
        return pHead;
    }

    while(pLast != NULL)
    {
        if(pLast->id == id)
        {
            printf("device id already exists!\n");
            return pHead;
        }
        pLast = pLast->pNext;
    }
    printf("device name:");

    if(scanf(" %99[^\n]", cName) != 1)
    {
        return pHead;
    }
    printf("status [1.available 2.repair 3.unavailable]:");
    if(scanf("%d", &status) != 1 || status < 1 || status > 3)
    {
        printf("invalid status!\n");
        return pHead;
    }


    pNode = malloc(sizeof(struct Device));
    if(pNode == NULL)
    {
        printf("not enough memory!\n");
        return pHead;
    }
    pNode->id = id;
    strcpy(pNode->name, cName);
    pNode->status = status;
    pNode->pNext = NULL;
    if(pHead == NULL)
    {
        pHead = pNode;
    }
    else
    {
        pLast = pHead;
        while(pLast->pNext != NULL)
        {
            pLast = pLast->pNext;
        }
        pLast->pNext = pNode;
    }
    printf("add successful!\n");
    return pHead;
}

//查找设备
void Find(struct Device *pHead)
{
    int id;
    printf("please input the device id to find:");
    if(scanf("%d", &id) != 1)
    {
        return;
    }
    while(pHead != NULL)
    {
        if(pHead->id == id)
        {
            printf("id:%d\tname:%s\tstatus:%d\n",
                   pHead->id, pHead->name, pHead->status);
            return;
        }
        pHead = pHead->pNext;
    }
    printf("can't find!\n");
}

//删除设备
struct Device *Delete(struct Device *pHead)
{
    struct Device *pNewHead = pHead;
    struct Device *pLast = NULL;
    struct Device *pdelete;
    int id;
    printf("please input the device id to delete:");
    if(scanf("%d", &id) != 1)
    {
        return pHead;
    }
    while(pHead != NULL)
    {
        if(pHead->id == id)
        {
            if(pLast == NULL)
            {
                pNewHead = pHead->pNext;
            }
            else
            {
                pLast->pNext = pHead->pNext;
            }
            pdelete = pHead;
            free(pdelete);
            printf("delete successful!\n");
            return pNewHead;
        }
        pLast = pHead;
        pHead = pHead->pNext;
    }
    printf("can't find!\n");
    return pNewHead;
}

//修改设备状态 
void modify(struct Device *pHead)
{
    int id;
    int status;
    printf("please input the device id to modify:");
    if(scanf("%d", &id) != 1)
    {
        return;
    }
    while(pHead != NULL)
    {
        if(pHead->id == id)
        {
            printf("new status [1.available 2.repair 3.unavailable]:");
            if(scanf("%d", &status) != 1 || status < 1 || status > 3)
            {
                printf("invalid status!\n");
                return;
            }
            pHead->status = status;
            printf("modify successful!\n");
            return;
        }
        pHead = pHead->pNext;
    }
    printf("can't find!\n");
}

//打印设备清单
void PrintInf(struct Device *pHead)
{
    printf("==============================DEVICE LIST==============================\n");
    if(pHead == NULL)
    {
        printf("device list is empty!\n");
    }
    while(pHead != NULL)
    {
        printf("id:%d\tname:%s\tstatus:%d\n",
               pHead->id, pHead->name, pHead->status);
        pHead = pHead->pNext;
    }
}

//设备总数量
void Count(struct Device *pHead)
{
    int iMany[4] = {0, 0, 0, 0};
    int iTotal = 0;
    while(pHead != NULL)
    {
        iTotal++;
        iMany[pHead->status]++;
        pHead = pHead->pNext;
    }
    printf("total devices:%d\n", iTotal);
    printf("available:%d\n", iMany[1]);
    printf("repair:%d\n", iMany[2]);
    printf("unavailable:%d\n", iMany[3]);
}

//释放空间
void Free(struct Device *pHead)
{
    while(pHead != NULL)
    {
        struct Device *pNode = pHead->pNext;
        free(pHead); 
        pHead = pNode;
    }
}
