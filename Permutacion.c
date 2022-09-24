#include <stdio.h>

int main()
{
    /* Prueba
    int A[] = {1,5,3,4};
    int N = 4;
    */
    long nuevo = N + 1;
    unsigned long long int sumatoria = (nuevo * (nuevo + 1)) /2;
    unsigned long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    unsigned long long int  rest = sumatoria - sum;
    int a = (int)rest;
    return a;
}