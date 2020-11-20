//FILAS

#include<queue> // biblioteca para trabalhar com filas
#include<iostream>
using namespace std;

int main()
{
    queue<string> eleitores;
    
    eleitores.push("Joazinho");
    eleitores.push("Mariazinha");
    eleitores.push("Adalberto");
    eleitores.push("Joana");
    
    cout << eleitores.size() << " eleitores aguardando na fila\n";
    cout << eleitores.front() <<" eh o proximo a votar\n";
    
    while(!eleitores.empty())
    {
        cout << eleitores.front() << " registrou o voto.\n";
        eleitores.pop();
        
        cout << eleitores.size() << " eleitores aguardando\n";
        if(eleitores.size() > 0)
            cout << "Proximo a votar: " << eleitores.front() << endl;
    }
    return 0;
}
