#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 1: 가위 2: 바위 3: 보
int main(void) {
    int win=0,draw=0,lose=0; // 승무패의 회수
    int user;
    int com;
    while (1)
    {
        printf("해당되는 숫자를 입력해주세요.\n");
        printf("(1):가위\n(2):바위\n(3):보\n(4):종료\n");
        scanf("%d",&user);
        if (user != 1 && user != 2 && user !=3 && user != 4)
            printf("잘못 입력하셨습니다.");
        if (user == 4)
            break;
        
        // 컴퓨터의 가위바위보
        srand(time(NULL));
        int com = rand() % 3 + 1;
        
        
        if (user == com)
        {
            printf("비겼습니다.");
            draw++;
        }
        if (user-com==1 || user-com==-2)
        {
            printf("이겼습니다.");
            win++;
        }
        if (user-com==-1 || user-com== 2)
        {
            printf("졌습니다.");
            lose++;
        }
    }
    printf("최종결과는 %d승 %d무 %d패 입니다.",win,draw,lose);
}
