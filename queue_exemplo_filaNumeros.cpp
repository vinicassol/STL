//
//  Ex_FilaNumeros.cpp
//  EstDados
//
//  Created by Vinicius Cassol on 19/11/20.
//

#include <iostream>
#include <queue>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    queue<int> numeros;
    
    while(numeros.size() < 30)
    {
        int num = rand()%100+1;
        numeros.push(num);
    }
    
    cout << numeros.size() << " numeros enfileirados! \n";
    while(!numeros.empty())
    {
        cout << numeros.front() << endl;
        numeros.pop();
    }
    
    return 0;
}
