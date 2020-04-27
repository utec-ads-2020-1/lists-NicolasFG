#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "node.h"

#define MAX 1000

using namespace std;


// TODO: Implement all methods
template <typename T>
class stack {
    T* data;
    int top;
    int capacity;

public:
    stack(int size = MAX);
    ~stack();

    void push(T);
    void pop();
    int Top();

    void resize();
    int size();
    bool empty();

};

template<typename T>
stack<T>::stack(int size) {
    data = nullptr;
    capacity = MAX;
    top = -1;
}

template<typename T>
stack<T>::~stack() {
    delete data;
}


//Listo
template<typename T>
void stack<T>::push(T elemento) {
    data = new T[MAX];

    if (empty()){
        throw exception();
    }
    if (size() > capacity){
        resize();
    }
    else{
        data[++top] = elemento;
        cout << "Elemento insertado: " << elemento << endl;
    }
}

//Listo
template<typename T>
int stack<T>::Top() {

    if (top == -1){
        throw exception();
    }

    else {
        cout << "El indice del ultimo elemento insertado es: " << top;
        return top;
    }
}


//Listo
template<typename T>
void stack<T>::pop() {
    if (empty()) {

        throw exception();
    }
    else {
        cout << "Elemento eliminado: " << data[top];
    }
}

//Listo
template<typename T>
bool stack<T>::empty() {

    if (data == nullptr){
        return true;
    }

    else{
        return false;
    }
}

//Listo
template<typename T>
int stack<T>::size() {
    int tamanio = top + 1;
    cout << "El tamanio de la pila es: " << tamanio << " // ";
    return tamanio;

}

template<typename T>
void stack<T>::resize() {
    capacity += MAX;
}



#endif