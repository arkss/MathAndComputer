//
//  main.c
//  factorial
//
//  Created by ark on 2018. 10. 2..
//  Copyright © 2018년 ark. All rights reserved.
//


#include <stdio.h>
    
    int fac(n)
    {
        
        if (n == 1)
        return 1;
        else
        return n * fac(n-1);
        
        
    }
    
    int main(void)
    {
        int result;
        result = fac(5);
        printf("%d\n",result);
    }


