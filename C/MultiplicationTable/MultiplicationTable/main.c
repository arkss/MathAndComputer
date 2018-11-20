//
//  main.c
//  MultiplicationTable
//
//  Created by ark on 03/10/2018.
//  Copyright © 2018 ark. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int number; // 몇 단 인지
    int i; // 반복문을 위한 변수
    
    do{
        printf("2~19단 중 원하는 단을 입력하세요\n");
        scanf("%d",&number);
    }while(number < 2 | number > 19); // 2~19 가 아니면 반복
    
    for (i=1;i<10;i++)
    {
        printf("%d * %d = %d\n", number , i , number*i); // 내용 출력
    }
    
    
}
