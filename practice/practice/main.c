//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/10/29.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int grade[5];
    
    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;
    
    for(i=0;i<5;i++)
        printf("student %i's grade : %i\n", i , grade[1]);
    return 0;
}
