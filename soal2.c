#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf ("%i", &N);
    for (int i = 1 ; i<=10 ; i++){
    printf ("%i x %i = %i\n", N, i, N * i);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
