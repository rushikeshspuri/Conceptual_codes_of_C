#include<stdio.h>

struct Demo // declarartion
{
    int i ;     //4
    float f;    //4
                //8
};

int main ()
{
    struct Demo dobj;           // Object Creation
    printf("%d\n",sizeof(dobj));    //8
    
    
    return 0;
}
