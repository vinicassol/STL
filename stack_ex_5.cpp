//
//  pilha_ex_5.cpp
//  Algoritmos
//
//  Created by Vinicius Cassol on 06/11/20.
//

/*
 Um estacionamento é composto por uma única alameda,
 em uma rua sem saída que guarda até dez carros. Existe apenas uma
 entrada/saída no estacionamento. Se chegar um cliente para retirar um
 carro que não seja o mais próximo da saída, todos os carros bloqueando
 seu caminho sairão do estacionamento. O carro do cliente será
 manobrado para fora do estacionamento, e os outros carros voltarão a ocupar a mesma sequência inicial.
 
*/

#include <iostream>
#include <stack>
using namespace std;

struct Carro
{
    string placa;
    int nManobras;
};

int main()
{
    stack <Carro> estacionamento;
    char op = ' ';
    Carro carro;
    stack<Carro> rua;
    string placa;
    bool encontrou;
    
    while(op != 'f' && op != 'F')
    {
        cout << "======= Estacionamento =======\n\n";
        cout << "E - Estacionar \n";
        cout << "R - Retirar Veiculo\n";
        cout << "F - Fechar o sistema\n";
        cout << "Informe seu desejo: ";
        cin >> op;
        
        //Processe entrada e saída de dados. Para isso, solicite ao usuário a opção desejada e o número da placa do carro. O programa deve imprimir uma mensagem sempre que um carro chegar ou sair, dependendo da ação efetuada.
        switch (op) {
            case 'E':
            case 'e':
                if(estacionamento.size() < 10)
                {
                    cout << "\nInforme a placa: ";
                    cin >> carro.placa;
                    carro.nManobras = 0;
                    estacionamento.push(carro);
                    cout << "Veiculo Estacionado. Tah bem cuidado!\n";
                }
                else
                    cout << "Estacionamento lotado\n";

                break;
            
            case 'R':
            case 'r':
                encontrou = false;
                cout << "Informe a placa do seu carro: ";
                cin >> placa;
                
                while(!encontrou)
                {
                    if(estacionamento.top().placa == placa)
                    {
                        cout << "Entregando carro " << placa << endl;
                        cout << estacionamento.top().nManobras << " manobras realizadas\n";
                        estacionamento.pop();
                        encontrou = true;
                    }
                    else
                    {
                        estacionamento.top().nManobras++;
                        rua.push(estacionamento.top());
                        estacionamento.pop();
                    }
                }
                while(rua.size() > 0)
                {
                    //cout << "Voltando da Rua, carro " << rua.top().placa << endl;
                    estacionamento.push(rua.top());
                    rua.pop();
                }
                
                break;
            
            case 'F':
            case 'f':
                cout << "Obrigado por utilizar nossos sistemas!\n\n";
                break;
                
            default:
                cout << "\nEscolha invalida\n";
                break;
        }
    }
    
    return 0;
}
