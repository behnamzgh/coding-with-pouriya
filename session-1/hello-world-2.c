#include <stdio.h>

int main(){
    int number = 1400;
    print_enteger(number);
    printf("hello world\n");
    print_enteger(number+621);
    return 0;
}

void print_enteger(int my_number){
    printf("my number is %d\n", my_number);
}