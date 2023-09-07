#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int converteParaInteiro(const std::string& binario);
std::string converteParaBinario(int decimal);

int main() {
    int result = converteParaInteiro("11011");
    string binario = converteParaBinario(698);
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
    std::string result;
    while (decimal > 0) {
        int remainder = decimal % 2;
        result.insert(result.begin(), '0' + remainder);
        decimal /= 2;
    }
    return result;
}