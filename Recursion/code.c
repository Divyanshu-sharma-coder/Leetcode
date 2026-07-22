#include <stdio.h>

void Recurs(){
    printf("Ininity\n");
    Recurs();
}

int main(){
    Recurs();
    return 0;
}