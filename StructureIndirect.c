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
    struct Demo dobj;   //object
    struct Demo *ptr = NULL;

     ptr = &dobj;


     ptr->i=11; 
     ptr->f=10;
     ptr->ch='A';

     printf("%d\n", ptr->i);
     printf("%c\n",ptr->ch);
     printf("%f\n",ptr->f);
    
    
    return 0;
}
