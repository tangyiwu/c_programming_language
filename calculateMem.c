#include<stdio.h>
#include<float.h>
#include<limits.h>

int main(){
    printf("Storage size for int : %lu \n",sizeof(unsigned int));
    printf("Minimum float positive value: %E\n",FLT_MIN);
    return 0;
}
