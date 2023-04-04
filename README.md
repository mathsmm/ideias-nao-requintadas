# ideias-nao-requintadas
Hoje elas são parcialmente inúteis mas amanhã podem não ser.


main
```c++
#include "lista_dupla.h"
#include <iostream>
using namespace std;

int main()
{
    ListaDupla *lista = new ListaDupla();
    
    lista->insere(1);
    lista->insere(2);
    
    lista->imprime();

    return 0;
}
```

lista_dupla.h
```c++
#pragma once
#include "no_lista_dupla.h"

class ListaDupla {
    public:
        NoListaDupla *prim;
        
        ListaDupla();
        void insere(int v);
        void imprime();
        // bool vazia();
        // NoListaDupla *busca(int v);
        // int comprimento();
        // NoListaDupla *ultimo();
        // void retira(int v);
        // void libera();
        // void insereFim(int v);
        // bool igual(ListaDupla l);
        // void merge(ListaDupla l);
}; 
```

lista_dupla.cpp
```c++
#include "lista_dupla.h"
#include <iostream>

ListaDupla::ListaDupla():
    prim{ NULL }
{}

void ListaDupla::insere(int v) {
    NoListaDupla *novo_no = new NoListaDupla(v);
    
    if (this->prim != NULL) {
        prim->ant = novo_no;
        novo_no->prox = prim;
    } else {
        novo_no->prox = NULL;
    }
    
    prim = novo_no;
}

void ListaDupla::imprime() {
    NoListaDupla *no_atual = prim;
    
    while (no_atual->prox != NULL) {
        std::cout << no_atual->info << std::endl;
        no_atual = no_atual->prox;
    }
}


// ListaDupla::bool vazia();


// ListaDupla::NoListaDupla *busca(int v);


// ListaDupla::int comprimento();


// ListaDupla::NoListaDupla *ultimo();


// ListaDupla::void retira(int v);


// ListaDupla::void libera();


// ListaDupla::void insereFim(int v);


// ListaDupla::bool igual(ListaDupla l);


// ListaDupla::void merge(ListaDupla l);
```

no_lista_dupla.h
```c++
#pragma once

class NoListaDupla {
    public:
        int info;
        NoListaDupla *ant;
        NoListaDupla *prox;
        
        NoListaDupla(int v);
};
```

no_lista_dupla.cpp
```c++
#include "no_lista_dupla.h"
#include <cstddef>

NoListaDupla::NoListaDupla(int v):
    info{ v },
    ant{ NULL },
    prox{ NULL }
{}
```
