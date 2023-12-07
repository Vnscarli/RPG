#include <iostream>

//This code calculates the probability for a single dice roll

int main(){
    float faces = 20; //How many faces the dice has
    int dice = 2; //How many dices are going to be rolled
    float target = 18; //Target value for the test
    if(dice==1){
        float resp = (faces-target+1) / faces; //probability for target or higher
        printf("%f\n", resp);
    }
    else if(dice==2){
        float x = (target*2)-1; //First element of arithmetic progression
        float y = (faces*2)-1; //Last element of arithmetic progression
        float resp = (((x+y)*(faces-target+1))/2)/(faces*faces);//probability for target or higher
        printf("%f\n", resp);
    }
    return 0;
}