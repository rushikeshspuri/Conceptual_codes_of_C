#include<stdio.h>

int main()
{
    int Arr[4]={10 , 20 , 30 , 40}; // member intialization list 
    
    int Brr []= {10,20,30,40}; //  member intialization list 
    
    int Crr [4]; 
    
    Crr[0]=10;
    Crr[1]=20; 
    Crr[2]=30;
    Crr[3]=40; // member  by member intialization
    
    printf("%d\n",Arr[0]);
    printf("%d\n",Brr[0]);
    printf("%d\n",Crr[0]);
    
    return 0;
}
