#include<stdio.h>

int no = 11;        // global variable (data)
void fun ()
{
    int i = 51;     // Local variable (stack)
    printf("Inside fun : %d\n",i);  
    printf("Inside fun : %d\n",no);
}

int main ()
{
    int i = 21;     // Local variable (stack)
    printf("Inside Main : %d\n",i);
    printf("Inside Main : %d\n",no);
   
   
    return 0;
}