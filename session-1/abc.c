#include <stdio.h>
#include <stdlib.h>

// in code we trust

int main(){
    // take the number from user and place that in defiend variable
    int vorodi;
    puts("tedade shokolat hat ro vared kon:");
    scanf("%i", &vorodi);

    // call functions
    func1(vorodi);
    printf("----------------------\n");
    func2(vorodi);
    printf("----------------------\n");
    func3();
}

// function for calculate how many chocolate you ate and how many of them left over in the dish.
int func1(Dish){
    int iteration = 0;
    while(Dish>0){
        printf("man %i shokolat khordam %i to zarf monde...\n",iteration, Dish);
        Dish -= 1;
        iteration += 1;
    }
    printf("DONE:( \n");
}

// just an useless func
int func2(adad){
    if(adad%2==0){
        printf("adad vared shode ZOJ mibashad.\n");
    }else{
        printf("adad vared shode FARD mibashad.\n");
    }
}

// another function using switch case
int func3(){
    char animal;
    puts("NOW at the end\nenter your beloved beast:\nA: cat\nB: lizard");
    scanf("%s",&animal);
    switch(animal){
        case 'A':
            printf("lovely\n");
            break;
        case 'B':
            printf("disgusting\n");
            break;
        default:
            break;
    }
}


// code by codepoete for the best mentor in the uniXverse ;)