// 문자열을 거꾸로 출력하는 프로그램
#include <stdio.h>
#include <string.h>

int main(void) {
    int length;
    int temp,i;
    char str[1000];
    

    printf("문자열을 입력하세요.\n");
    scanf("%s",str);
    length = strlen(str);
    
    for (i=0;i<length/2;i++)
    {
        temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
    printf("%s",str);
}



