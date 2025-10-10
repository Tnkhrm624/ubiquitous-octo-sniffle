/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
    /**名前をつけて数字を保存しとく**/
    int tutida = 4;
    /**printfは、**の間に、表記したい文字を書く**/
    printf(" ガリポン先生と%d回目があったよ！\n", tutida);
    tutida = tutida/2;
    printf("あ！ちがう！ガリポン先生と%d回握手したよ！", tutida);
    return 0;
}