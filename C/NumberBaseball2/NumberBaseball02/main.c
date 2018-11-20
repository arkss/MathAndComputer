#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    int answer; // 컴퓨터의 값
    int answer_h, answer_t, answer_o; // 컴퓨터의 값의 각 자리수
    int input; // 사용자가 입력한 정답
    int input_h, input_t, input_o; // 사용자가 입력한 정답의 각 자리수
    int max,min;
    double ave;
    int count=0;// 몇 번 만에 찾는지 세줌
    int i;
    int count_sum = 0; // 평균적으로 몇 번안에 찾았는지 확인하기 위해 count 의 합을 구하기 위한 sum
    
    // 사용자의 정답 입력
    while (1)
    {
        printf("정답이 될 세자리 숫자를 입력하세요.\n");
        scanf("%d",&input);
        input_h = input / 100;
        input_t = (input-input_h*100) / 10;
        input_o = input-input_h*100-input_t*10;
        /*
     
        */
        // 각 자리의 수가 모두 달라야 제대로 된 난수 생성이다.
        if (input_h != input_t && input_h != input_o && input_t != input_o )
            break;
    }
    srand(time(NULL));
    printf("숫자야구를 시작합니다.\n");
    
    min = 10000000;
    max = 0;
    
    for(i=0;i<100;i++)
    {
        printf("%d차 시행\n",i+1);
        count = 0;
        while (1)
        {
            answer = rand() % 1000; // 0~999사이의 정수
            printf("%03d\n",answer);
            answer_h = answer / 100;
            answer_t = (answer-answer_h*100) / 10;
            answer_o = answer-answer_h*100-answer_t*10;
            
            // 자리 수가 같은 게 랜덤하게 생성 되었으면 카운팅을 하지말고 다시 반복
            if (answer_h == answer_t || answer_h == answer_o || answer_t == answer_o )
                continue;
            
            count++; // 몇 번만에 찾는지 세준다.
            
            if (answer==input) // 정답이 맞았으면 반복문 종료
                break;
        }
        printf("%d차 시행은 %d번 걸렸습니다.\n",i+1,count);
        count_sum += count;
        
        if (count < min)
            min = count;
        if (count > max)
            max = count;
    }
    ave = (double)count_sum / 100;
    printf("최대는 %d, 최소는 %d, 평균은 %.2lf입니다.",max,min,ave);
}
