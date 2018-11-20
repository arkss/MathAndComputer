//
//  main.c
//  GCD_LCM
//
//  Created by ark on 03/10/2018.
//  Copyright © 2018 ark. All rights reserved.
//

#include <stdio.h>
//  최대공약수를 구할 때 음수가 있으면 양수로 바꾼 후 최대공약수를 구하고
//  촤소공배수는 두수의 곱 = 최대공약수 * 최소공배수 임을 이용하자.

int GCD(int number1, int number2);
int LCD(int number1, int number2);

int main(void) {
    int GCD_result,LCD_result;
    int num1, num2;
    printf("최대공약수와 최소공배수를 구할 두 수를 입력하세요.");
    scanf("%d %d",&num1,&num2);
    if ((num1 == 0) && (num2 == 0))
        printf("0과 0의 최대공약수와 최소공배수는 정의가 되지 않습니다.");
    GCD_result = GCD(num1,num2);
    LCD_result = LCD(num1,num2);
    printf("최대 공약수는 %d, 최소공배수는 %d입니다.\n",GCD_result,LCD_result);
}

//최대공약수
int GCD(int number1, int number2)
{
    int temp;
    
    // number1 과 number2 를 양수로 바꿔주기
    if (number1 < 0)
        number1 = - number1;
    if (number2 < 0)
        number2 = - number2;
    
        
    // number1 에 큰 값이 오도록 값 교환
    if (number2 > number1)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    
    while(number2 != 0)
    {
        temp = number2;
        number2 = number1 % number2;
        number1 = temp;
    }
    return number1;
}


//최소공배수
int LCD(int number1, int number2)
{
    int result;
    int GCD_result;
    int (*fpt)(int,int) = GCD;
    GCD_result = fpt(number1,number2);
    result = number1 * number2 / GCD_result;
    if (result<0)
        result = -result;
    return result;
}
