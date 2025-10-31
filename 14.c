#include <stdio.h>

int main(void)
{
    int diff;
    char large[3]; // ２文字+終端文字
    char small[3]; // 
    
    printf("アルファベットの大文字を二文字入力してください>>");
    scanf("%2s",large); // 二文字まで入力
    
    diff = 'a' - 'A';   //'A'と'a'との文字の差
   
   small[0] = large[0] + diff; // 
   small[1] = large[1] + diff; //
   small[2] = '\0'; // 文字列の終端
    
    printf("大文字は%s    小文字は%s\n",large,small);

    return 0;
}