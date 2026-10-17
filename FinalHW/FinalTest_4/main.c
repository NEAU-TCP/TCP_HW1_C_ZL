#include <stdio.h>
#include "creatbook.h"

int main()
{
    int i = 0;
    struct Device * pHead = NULL;
    do
    {
        printf("==================================================================\n");
        printf("========================== Device Manager ========================\n");
        printf("=                                                                =\n");
        printf("=             1.add device              2.find device            =\n");
        printf("=             3.delete device           4.modify status          =\n");
        printf("=             5.print device list       6.device statistics      =\n");
        printf("=             7.print sth special       8.exit                   =\n");
        printf("==================================================================\n");
        printf("please choice:[1-8]# ");

        if(scanf("%d", &i) != 1)
        {
            break;
        }
        switch( i )
        {
            case 1:
            {
                pHead = Creat( pHead );
            }
                break;
            case 2:
                Find( pHead );
                break;
            case 3:
                pHead = Delete( pHead );
                break;
            case 4:
                modify( pHead );
                break;
            case 5:
                PrintInf( pHead );
                break;
            case 6:
                Count( pHead );
                break;
            case 7:
                printf("Bvi：世界上没有完不成的任务，只有勇敢的狗狗！\n");
                break;
            case 8:
                break;
            default:
                printf("invalid choice!\n");
                break;
        }
    }while(i != 8);

    Free( pHead );
    pHead = NULL;
    printf("all device nodes have been freed.\n");

    return 0;
}
