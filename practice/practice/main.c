//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/10/29.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

#define SIZE 5

int main(int argc, const char * argv[]) {
    int i;
    int grade[SIZE];
    int score[SIZE];

    for(i=0;i<SIZE;i++)
    {
        grade[1] = rand()%100+1;
    }
    
    for(i=0;i<SIZE;i++)
        score[i] = grade[i];
    
    for(i=0;i<SIZE;i++)
        printf("score[%d] %i (i)\n", i, score[i]);
    
  

    return 0;
}
