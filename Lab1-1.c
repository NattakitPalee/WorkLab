#include <stdio.h>

int main() {

    int x[5] = { 1, 2, 3, 4, 5 } ;
    int n = x [5] ;

    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++) {
        printf("[%d] Hello World\n", i) ;
    }

    return 0;
}

