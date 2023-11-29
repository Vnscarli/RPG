#include <iostream>
#include <cmath>
using namespace std;

float mediaDados(int lados){
    int qtlados=lados;
    int mult=1;
    float med;
    for(int i=1;i<qtlados+1;i++){
        med+=(mult*i);
        mult+=2;
    }
    med = med/(pow(qtlados, 2));
    return med;
}

int main(){
    int x = 20;
    float resp =mediaDados(x);
    printf("%f", resp);
}