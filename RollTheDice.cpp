#include <iostream>

//This code calculates the probability for a single dice roll

int main(){
    int lados = 20; //How many faces does the dice have?
    int dice = 1; //How many dices are going to be rolled?
    if(dice==1){
        float resp = 1.0 / lados;
        printf("%f\n", resp);
    }
    return 0;
}