#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int i,o,j;
    for (i=0;i<10;i++)
    {
        printf("�����%d��Ԫ��:\n",i+1);
        scanf("%d",&numbers[i]);
    }
        getchar();
    for (j=0;j<9;j++)
    {
        for (i=0;i<9-j;i++)
        {

        if (numbers[i]>numbers[i+1])
        {
           o = numbers[i];
           numbers[i] = numbers[i+1];
           numbers[i+1] = o;
        }
        }
    }


    printf("��С��������Ϊ:\n");
    for (i=0;i<10;i++)
    {
        printf(" %d ",numbers[i]);
    }
    return 0;

}
