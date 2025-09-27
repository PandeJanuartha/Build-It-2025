#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A;
    int B;
    scanf ("%i %i", &A, &B);
    int Jumlah = 0;
    for (int i=A; i<=B; i++){
        Jumlah += i;
    }
        printf ("%i", Jumlah);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
