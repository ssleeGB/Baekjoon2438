//
//  main.c
//  baekjoon2438
//
//  Created by 이승섭 on 2018. 11. 7..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int N, i, j;
    
    scanf("%d", &N);
    
    if(0<=N && N<=100)
        for(i = 1; i<=N; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    return 0;
}
