//
//  main.c
//  ch2
//
//  Created by tangyiwu on 16/4/19.
//  Copyright © 2016年 tangyiwu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("signed short min = %d\n", -(short)((unsigned short) ~0 >> 1));
    return 0;
}
