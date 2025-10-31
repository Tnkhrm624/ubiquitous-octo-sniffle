#include <stdio.h>

int main()
{
    int k;
    printf("身長何センチですか？");
    scanf("%d",&k);
    
    if (k>=176)
    {
        printf("ノッポだね！");
    }

    else if(k<170)
    {
        printf("土田だね！");
    }
    else
    {
        printf("健康だね");
    }
    
    return 0;
    
}