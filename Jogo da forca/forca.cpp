#include <iostream>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "Melancia";

bool letraExiste(char chute){
    for (int i = 0; i < PALAVRA_SECRETA.size(); i++){
        if (chute == PALAVRA_SECRETA[i]){
            return true;
        }
    }
    return false;
}

int main(){
    cout << PALAVRA_SECRETA << endl;

    bool naoAcerto = true;
    bool naoEnforcou = true;

    while (naoAcerto && naoEnforcou){
        char chute;
        cin >> chute;

        if (letraExiste(chute))
        {
            cout << "\nVoce acertou! Seu chute esta na palavra.";

        }
        else{
            cout << "\nVoce errou! Seu chute nao esta na palavra.";
        }
        
    }
    
}