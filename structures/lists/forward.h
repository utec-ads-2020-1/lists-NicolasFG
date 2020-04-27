#ifndef FORWARD_H
#define FORWARD_H

#include <iostream>
#include <string>


#include "list.h"
#include "iterators/forward_iterator.h"

using namespace std;


template <typename T>
class ForwardList : public List<T> {
public:
    ForwardList() : List<T>() {}

    //Listo
    T front() {
        if(!empty())
            return this->head->data;
        else
            throw exception();
    };

    //Listo
    T back(){
        if(!empty())
            return this->tail->data;
        else
            throw exception();
    };

    //Listo
    void push_front(T elemento){
        auto temp = new Node<T>;
        temp->data = elemento;
        if(empty())
        {
            this->head = temp;
            this->tail = temp;
            temp->next = nullptr;
        }
        else
        {
            temp->next = this->head;
            this->head = temp;
        }
        this->nodes++;
    };

    //Listo
    void push_back(T elemento ){
        auto temp = new Node<T>;
        temp->data = elemento;
        if(empty())
        {
            this->head = temp;
            this->tail = temp;
            temp->next= nullptr;
        }
        else
        {
            temp->next= nullptr;
            this->tail->next = temp;
            this->tail = temp;
        }

        this->nodes++;
    };

    //Listo
    void pop_front(){
        if(!empty())
        {
            auto temp = this->head;
            if(size() > 1)
            {
                this->head = this->head->next;
                delete temp;
            }
            else
            {
                this->head= nullptr;
                this->tail= nullptr;
            }

            this->nodes--;
        }
        else
            throw exception();
    };


    //Listo
    void pop_back(){
        if(!empty())
        {
            auto temp = this->tail;
            auto temp2 = this->head;

            for (int i = 1; i < size() - 1; i++){
                temp2 = temp2->next;
            }
            temp2->next = nullptr;
            this->tail = temp2;

            delete temp;

            this->nodes--;
        }
        else {
            throw exception();
        }
    };

    //Listo
    T operator[](int posicion){
        if(posicion < size()) {
            auto temp = this->head;

            for (int i = 0; i < posicion; i++) {
                temp = temp->next;
            }
            return temp->data;
        }
        else {
            throw exception();
        }
    };


    //Listo
    bool empty() {
        return this->nodes == 0;
    };

    //listo
    int size(){
        return this->nodes;
    };

    //Listo
    void clear(){
        auto temp = this->head;
        while(temp->next != nullptr)
        {
            temp = temp->next;
            pop_front();
        }
        pop_front();
    };


    //Listo
    void sort() {
        this->no_ordenado = true;
        while (this->no_ordenado) {

            this->no_ordenado = false;

            auto temp = this->head;

            while (temp->next != nullptr) {

                if (temp->data > temp->next->data) {
                    int t = temp->data;

                    temp->data = temp->next->data;

                    temp->next->data = t;

                    this->no_ordenado = true;
                }
                temp = temp->next;
            }
        }
    };

    //Listo
    void reverse(){
        for(int i = size(); i > 1; i--){
            swap(i, i-1);
        }
        auto temp = this->head;
        this->head = this->tail;
        this->tail = temp;
        this->tail->next = nullptr;
    };

    //Listo
    void swap(int elemento1, int elemento2){
        auto nodo1= this->head;
        auto nodo2= this->head;

        for(int i=0;i<elemento1-1;i++)
        {
            nodo1=nodo1->next;
        }
        for(int i=0;i<elemento2-1;i++)
        {
            nodo2=nodo2->next;
        }
        nodo1->next = nodo2;

    };


   /* void imprimir(){
        if (!empty()) {
            auto temp = this->head;
            for (int i = 0; i < size(); i++){
                cout << temp->data << " ";
                temp = temp->next;
            }
        } else{
            throw exception();
        }
    };*/

    //Listo
    ForwardIterator<T> begin(){
        return ForwardIterator<T>( this->head );
    };

    //Listo
    ForwardIterator<T> end(){
        return ForwardIterator<T>( this->tail->next) ;
    };

    //Listo
    string name() {
        return "Forward List";
    }

    //Listo
    void merge(ForwardList<T>& forward_list){
        for(int i = 0; i < forward_list.size();i++)
        {
            this->push_back(forward_list[i]);
        }
    };
};

#endif