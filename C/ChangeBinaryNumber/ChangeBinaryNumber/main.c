//
//  main.c
//  ChangeBinaryNumber
//
//  Created by ark on 03/10/2018.
//  Copyright © 2018 ark. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int list[32] = {0,};
    int i=0,j;
    unsigned long number;
    printf("2진수로 바꿀 10진수를 입력하세요.");
    scanf("%lu",&number);
    
    if (number == 0)
    {
        printf("%d",0);
        return 0;
    }
    
    while (number != 0)
    {
        list[i] = number % 2;
        number = number / 2;
        i++;
    }
    
    for (j=i-1;j>=0;j--)
    {
        printf("%d",list[j]);
    }
}

