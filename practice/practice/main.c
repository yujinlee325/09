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
    int i, average;
    int sum;
    int grade[SIZE];
    
    printf("5명의 점수를 입력하세요.\n");
    
    for(i=0;i<SIZE;i++)
        scanf("%d",&grade[i]);
    
    for(i=0;i<SIZE;i++)
        printf("grade[%d] = %d\n", i, grade[i]);
    
    average = sum / SIZE;
    printf("averge : %i\n", average);
    

    return 0;
}
