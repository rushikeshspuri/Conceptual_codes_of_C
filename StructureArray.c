#include<stdio.h>

struct Hello 
{
    float f;        //4 
    int arr [3];    //12
}hobj;              //16

int main ()
{
    printf("Size of Object : %lu\n",sizeof(hobj));
    
    return 0;
}
