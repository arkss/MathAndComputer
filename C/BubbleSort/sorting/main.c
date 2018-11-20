//
//  main.c
//  sorting
//
//  Created by ark on 03/10/2018.
//  Copyright © 2018 ark. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int i,j; // 반복문을 위한 변수
    int list[10]; // 값을 입력받을 배열
    int temp;
    printf("10개의 정수를 입력받겠습니다.\n");
    for (i=0;i<10;i++)
    {
        printf("%d번째 정수를 입력하세요.",i+1);
        scanf("%d", &list[i]);
        
    }
    //bubble sorting
    for (i=0;i<10;i++)
        for (j=0;j<9 ;j++)
        {
            if (list[j] > list[j+1])
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    for (i=0;i<10;i++)
    {
        printf("%d",list[i]);
        
    }
    
}

