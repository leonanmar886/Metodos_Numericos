#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int converteParaInteiro(const std::string& binario);
std::string converteParaBinario(int decimal);

int main() {
    int result = converteParaInteiro("11011");
    string binario = converteParaBinario(27);
    return 0;
}

int converteParaInteiro(const std::string& binario){
    int qtdDigitos = binario.length() - 1;
    int result = 0;
    for (int i = 0; i <= qtdDigitos; ++i) {
        int value = binario.at(qtdDigitos - i) - '0';
        result += value * pow(2.0, (double)i);
    }
    return result;
}


string converteParaBinario(int decimal){
    string result;
    int number = decimal;
    while(number!=0){
        result.append(std::to_string(fmod(number, 2.0)));
        number = (int)number/2;
    }
    reverse(result.begin(), result.end());
    return result;
}