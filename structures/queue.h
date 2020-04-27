#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "node.h"

#define MAX 1000


using namespace std;

// TODO: Implement all methods
template <typename T>
class queue {

    Node<T>* header;
    Node<T>* tailer;
    int tamanio;
    int capacity;

public:
    queue(int size = MAX);
    ~queue();

    //Agregar
    void push(T);

    //Sacar
    void pop();

    //El proximo que saldra
    int front();

    //El ultimo que entro
    int back();

    //Tamaño de la cola
    int size();

    //Aumenta el tamaño Capacity
    void resize();

    //Para saber si esta vacio
    bool empty();
};

template<typename T>
queue<T>::queue(int size) {
    header = new Node<T>;
    tailer = new Node<T>;

    header->next = tailer;
    tailer->prev = header;

    header->prev = nullptr;
    tailer->next = nullptr;

    capacity = size;

    tamanio = 0;

}


template<typename T>
void queue<T>::push(T elemento) {

    if (tamanio < capacity)
    {
        auto *temp = new Node<T>;
        temp ->data = elemento;

        temp->next = tailer;
        temp->prev = tailer->prev;

        tailer->prev->next = temp;
        tailer->prev = temp;

        tamanio++;

    }
    if (tamanio > capacity){
        resize();

    }

    else{
        throw exception();
    }

}


template<typename T>
void queue<T>::pop() {

    if(!empty()){

        auto *temp = header->next->next;

        delete header->next;

        header->next = temp;
        temp->prev = header;

        tamanio--;

    }
    else {
        throw exception();
    }

}

template<typename T>
int queue<T>::front() {

    if (empty())
    {
        throw exception();
    }
    else {
        cout << header->next->data;
        return header->next->data;
    }

}

template<typename T>
int queue<T>::back() {
    if(empty()){
        throw exception();
    }
    else {
        cout << tailer->prev->data;
        return tailer-> prev->data;
    }

}

template<typename T>
bool queue<T>::empty() {
    if (tamanio == 0){
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
queue<T>::~queue() {
    while(!empty()){
        pop();
    }
    delete header;
    delete tailer;
}

template<typename T>
int queue<T>::size() {
    return tamanio;
}


template<typename T>
void queue<T>::resize() {
    capacity += MAX;
}


#endif