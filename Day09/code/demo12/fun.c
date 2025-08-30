#include"header.h"
/*
    Here we are defining the function sub() , accept() and display()
*/

void display(int res)
{
    printf("res = %d \n",res);
}


int sub (void )
{
    int n1 , n2 , res;
    n1 = accept();
    n2 = accept();
    res = n1 - n2;
    return res;
}

//If we declare a function as static , then that function is accessible only inside that file
//If we try to access this function in other file , it will give error
static int accept(void)
{
    int n1;
    printf("Enter the num : ");
    scanf("%d",&n1);
    return n1;
}

