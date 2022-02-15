#include <stdio.h>
#include <stdlib.h>

int ez(int num1, int num2)
{

    if(num1==num2)
    {
    
        return 1;
    }
    else
    {
        return 0;
    }

}


int main()
{
    int numa,numb;
     int variabila_care_stocheaza_retfnct;

    printf("Enter 2 numbers:\n");
    scanf("%d%d",&numa,&numb);

    variabila_care_stocheaza_retfnct = ez(numa,numb);

        return 0;
}
