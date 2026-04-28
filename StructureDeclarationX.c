#include<stdio.h>

struct Demo // declarartion
{
    int i ;     //4
    char ch;    //1 Generates Padding 
    float f;    //4
                //12
};

int main ()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));    //12
    
    
    return 0;
}
