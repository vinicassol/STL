//FILAS

//incluir a biblioteca

#include <iostream>
#include <queue> // Biblioteca para trabalhar com filas
using namespace std;

int main()
{
    //declararção da fila
    queue<string> jogadores;
    
    jogadores.push("Giovanni");
    jogadores.push("Aline");
    jogadores.push("Gabriel");
    

    
    char op;
    string novo;
    
    do
    {
        cout << jogadores.size() << " jogadores aguardando para entrar no server.\n";
        cout << jogadores.front() << " estah na frente da fila.\n";
        
        cout << "Pressione 'a' para adminitir jogador no server, 'f'para adicionar novo jogador na fila de espera ou 's'para sair: ";
        cin >> op;
        
        switch(op)
        {
            case 'a':
                cout << jogadores.front() << " com acesso liberado!\n";
                jogadores.pop();
                break;
            case 'f':
                cout << "Qual o nome do novo jogador? ";
                cin >> novo;
                jogadores.push(novo);
                cout << novo << " adicionado ao final da fila. " << jogadores.size() << " jogadores aguardando!\n";
                break;
            case 's':
                cout << "Server finalizado, " << jogadores.size() << " jogadores nao conseguiram acessar :( \n Ficaram sem jogar: \n";
                while(!jogadores.empty())
                {
                    cout << jogadores.front() << endl;
                    jogadores.pop();
                }
                
                break;
            default:
                cout << "Op invalida\n";
        }
        
    }while(op!='s');
    
    
    
    
    return 0;
}

