//
//  main.c
//  PrimeNumber
//
//  Created by ark on 03/10/2018.
//  Copyright © 2018 ark. All rights reserved.
//


// 10000만번째 소수는 104729
#include <stdio.h>


int main(void)
{
    int input; // 입력받은 수
    int count = 0; // 2부터 소수를 세주며 하나 셀 때마다 count 를 1씩 늘림
    
    int i=0,j;
    do{
    printf("10000보다 같거나 작은 정수 n을 입력하면 n번째 소수를 알려드리겠습니다.\n");
    scanf("%d", &input);
    }while(input>10000 | input <0);
    
    
    while (input != count)
    {
        i++;
        for (j=2;j<i;j++)
        {
            if (i%j == 0)
                break;
        }
        if (i==j)
            count++;
        
    }
    printf("%d",i);
}
