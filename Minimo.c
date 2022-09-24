#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Prueba
    int A[] = {-1000,1000};
    int N = 2;
    */

    int rest = 0;
    int sum = 0;

    for (int i = 1; i < N; i++)
    {
        rest += A[i];
    }
    int min = abs(A[0] - rest);
    
    for (int i = 0; i < N -1; i++)
    {
        sum += A[i];
        if (i > 0) {
            rest -= A[i];
        }
        if (abs(sum - rest) < min) {
            min = abs(sum - rest);
            
        }
        
        
    }
    
    printf("%i", min);
    return min;
}
