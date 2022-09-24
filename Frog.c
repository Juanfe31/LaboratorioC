#include <stdio.h>

int main()
{
    /* Prueba
    int X = 10;
    int Y = 85;
    int D = 30;
    */
    int rest = Y - X;
    int count = 0;
    if (rest % D == 0) 
    {
        count = rest / D;
    } 
    else  
    {
        count = rest / D;
        count++;
    }
    return count;
}
