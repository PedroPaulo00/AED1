#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string expressao;
    
    cout << "Digite a expressão: ";
    getline(cin, expressao);

    stack<char> pilha1;
    stack<char> pilha2;

    for (char c : expressao){
        if (c == '+' || c == '-'){
            pilha1.push(c);
        } else if (isalpha(c)){
            pilha2.push(c);
        }
    }

    cout << "Operadores:" << endl;
    while (!pilha1.empty()){
        char operador = pilha1.top();
        pilha1.pop();
        cout << operador << endl;
    }

    cout << "Operandos:" << endl;
    while (!pilha2.empty()){
        char operando = pilha2.top();
        pilha2.pop();
        cout << operando << endl;
    }
}
