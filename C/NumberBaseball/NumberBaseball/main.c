#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int answer; // 정답
    int answer_h, answer_t, answer_o; // 정답의 각 자리수
    int input; // 사용자가 입력한 값
    int input_h, input_t, input_o; // 사용자가 입력한 각 자리수
    int s=0, b=0; // strike 와 ball
    srand((unsigned long)time(NULL));
    while (1)
    {
        answer = rand() % 1000; // 0~999사이의 정수
        answer_h = answer / 100;
        answer_t = (answer-answer_h*100) / 10;
        answer_o = answer-answer_h*100-answer_t*10;
        printf("###%d###\n",answer); // 답안확인위한 출력
        
        // 각 자리의 수가 모두 달라야 제대로 된 난수 생성이다.
        if (answer_h != answer_t && answer_h != answer_o && answer_t != answer_o )
            break;
    }
    
    printf("숫자야구를 시작합니다.\n");
    while (s!=3)
    {
        s = 0, b =0;
    
        printf("세자리 숫자를 입력하세요.\n");
        scanf("%d",&input);
        input_h = input / 100;
        input_t = (input-input_h*100) / 10;
        input_o = input-input_h*100-input_t*10;
        
        if (input_h == input_t || input_h == input_o || input_t == input_o )
            printf("같은 수가 중복되지는 않습니다.\n");
        
        if (answer_h == input_h)
            s++;
        if (answer_t == input_t)
            s++;
        if (answer_o == input_o)
            s++;
        if (answer_h ==input_t || answer_h ==input_o )
            b++;
        if (answer_t ==input_h || answer_t ==input_o )
            b++;
        if (answer_o ==input_h || answer_o ==input_t )
            b++;
        printf("%dstrike %dball\n",s,b);
    }
    printf("정답은 %03d입니다.",answer);
}

