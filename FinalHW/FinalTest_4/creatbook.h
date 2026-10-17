#ifndef CREATBOOK_H
#define CREATBOOK_H

struct Device
{
    int id;                //设备ID 
    char name[100];        //设备名称 
    int status;            //设备状态， 1:可使用, 2:维修, 3:不可使用. */
    struct Device *pNext;  //指向下一个设备节点
};

//创建链表 
struct Device *Creat(struct Device *pHead);
//添加设备 
struct Device *add(struct Device *pHead);
//查找设备 
void Find(struct Device *pHead);
//删除设备 
struct Device *Delete(struct Device *pHead);
//修改设备状态 
void modify(struct Device *pHead);
//打印设备清单
void PrintInf(struct Device *pHead);
//设备总数量 
void Count(struct Device *pHead);
//释放空间
void Free(struct Device *pHead);

#endif /* CREATBOOK_H */
