#include<stdio.h>
#pragma pack(1)
struct Demo // declarartion
{
    int i ;     //4
    char ch;    //1  Not Generates Padding 
    float f;    //4
                //9
};

int main ()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));    //9
    
    
    return 0;
}
