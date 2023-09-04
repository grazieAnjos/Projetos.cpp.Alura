#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
    cout << "\n************************************";
    cout << "\n* Bem-vindo ao Jogo da Adivinhacao! *";
    cout << "\n************************************";

    cout << "\nEscolha seu nivel de dificuldade: ";
    cout << "\nFacil (F), Medio (M), Dificil (D)\n";
    
    char dificuldade;
    cin >> dificuldade;

    int numeroDeTentativas;

    if(dificuldade == 'F' || 'f'){
        numeroDeTentativas = 15;
    }
    else if (dificuldade == 'M' || 'm'){
        numeroDeTentativas = 10;
    }
    else {
        numeroDeTentativas = 5;
    }

    srand(time(NULL));
    const int NUMEROSECRETO = rand() % 100;
    int tentativas = 0;
    bool naoAcerto = true;

    double pontos = 1000.0;

    for (tentativas = 1; tentativas <= numeroDeTentativas; tentativas++){
        cout << "\nTentativa: " << tentativas;
        int chute;
        cout << "\nQual seu chute? ";
        cin >> chute;
        cout << "O valor do seu chute eh: " << chute;

        double pontosPerdidos = abs(chute - NUMEROSECRETO)/2.0;
        pontos = pontos - pontosPerdidos;

        bool acertou =  chute == NUMEROSECRETO;
        bool maior =  chute > NUMEROSECRETO;

        if (acertou){
            cout << "\nVoce acertou o numero secreto. Parabens!";
            naoAcerto = false;
            break;
        }
        else if(maior){
            cout << "\nSeu chute foi maior que o numero secreto.";
        }
        else{
            cout << "\nSeu chute foi menor que o numero secreto.";
        }
    }
    cout << "\nFim de jogo!";
    if(naoAcerto){
        cout << "\nNao acerto, tente novamente";
        cout << "\nO numero secreto era " << NUMEROSECRETO << ".";
    }
    else {
        cout << "\nVoce Acertou em " << tentativas << " tentativas!";
        cout.precision(2);
        cout << fixed;
        cout << "\nSua pontuacao foi de " << pontos << " pontos.";
    }
    
}