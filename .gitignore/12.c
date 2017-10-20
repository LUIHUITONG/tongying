#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int i,o,j;
    for (i=0;i<10;i++)
    {
        printf("输入第%d个元素:\n",i+1);
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


    printf("由小到大排序为:\n");
    for (i=0;i<10;i++)
    {
        printf(" %d ",numbers[i]);
    }
    return 0;

}
