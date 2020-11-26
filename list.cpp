#include <iostream>
#include <list>

using namespace std;


int main()
{
    list <int> minhaLista;
    list <int>::iterator it; // suporte para percorrer a lista
    
    minhaLista.push_back(2); //insere o valor no final da lista
    minhaLista.push_front(35); // Insere o valor no inicio da lista
    minhaLista.push_back(7);
    minhaLista.push_back(14);
    minhaLista.push_front(81);
    minhaLista.push_back(28);
    
    cout << "Tamanho da Lista: " << minhaLista.size() << endl;
    cout << "Primeiro da Lista: " << minhaLista.front() << endl;
    cout << "Ultimo da Lista: " << minhaLista.back() << endl;
    
    minhaLista.pop_front();
    cout << "Removido item no inicio da Lista\n";
    cout << "Tamanho da Lista: " << minhaLista.size() << endl;
    cout << "Primeiro da Lista: " << minhaLista.front() << endl;
    cout << "Ultimo da Lista: " << minhaLista.back() << endl;
    
    minhaLista.pop_back();
    cout << "Removido item no final da Lista\n";
    cout << "Tamanho da Lista: " << minhaLista.size() << endl;
    cout << "Primeiro da Lista: " << minhaLista.front() << endl;
    cout << "Ultimo da Lista: " << minhaLista.back() << endl;
    
   //Percorre e atualiza a lista
    for(it = minhaLista.begin(); it != minhaLista.end(); it++ )
    {
        if(*it % 2 == 0)
        {
            *it = 0; // troca os valores pares por zero
            
            //minhaLista.erase(it); // apagar o registro em questao
            // minhaLista.insert(it, -1); //Insere antes do iterador
            
            //insere depois do iterador
            /*
            it++;
            minhaLista.insert(it, -1);
            it--;
             */
        }
    }
    
    cout << "\nItens da Lista: \n";
    for(it = minhaLista.begin(); it != minhaLista.end(); it++ )
    {
        cout << *it << endl;
    }
    
    // limpar a lista
    minhaLista.clear();
    
    cout << "\nTodos os itens apagados. Tamanho da Lista: " << minhaLista.size() << endl;
}
