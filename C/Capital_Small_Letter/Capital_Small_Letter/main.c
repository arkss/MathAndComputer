/// 대문자는 소문자로, 소문자는 대문자로 변경
#include <stdio.h>
#include <string.h>

int main(void) {
    char ch;
    
    printf("입력한 문장의 대소문자를 바꿉니다.\n");
    ch = getchar();
    while (ch != '\n')
    {
        if (ch<='Z' && ch>='A')
        {
            ch = ch + 32;
            
        }
        else if (ch<='z' && ch>='a')
        {
            ch = ch - 32;
        }
        putchar(ch);
        ch = getchar();
    }
    printf("\n끝");
}

