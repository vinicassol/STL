//
//  main.cpp
//  EstDados-STL
//
//  Created by Vini Cassol on 29/10/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    /* Um motoboy precisa entregar 4 pizzas. As pizzas devem ser entregues na seguinte ordem: Portuguesa, Marguerita, Quatro Queijos, Catupiry
    Como o motoboy organiza as pizzas no bagageiro?*/
    
    //Declarar a pilha
    stack <string> bag;
    
    // Empilhar os elementos
    bag.push("Catupiry"); // porque essa eh a ultima a ser entregue
    bag.push("Quatro Queijos");
    bag.push("Margerita");
    bag.push("Portuguesa"); // a primeira a ser entregue - LIFO
    
    cout << bag.size() << " pizzas prontas para a entrega. A primeira a ser entregue eh a " << bag.top() << endl;
    
    // Enquanto houverem pizzas, entrega a do topo e vai pra proxima
    while(!bag.empty())
    {
        cout << "Pizza entregue: " << bag.top() << endl;
        bag.pop();
        
        if(bag.size() > 0)
            cout << "Proxima Entrega: " << bag.top() << endl;
        else
            cout << "Todas as pizzas foram entregues!\n";
    }
    

    return 0;
}
