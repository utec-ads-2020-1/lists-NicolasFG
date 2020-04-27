#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "list.h"
#include "iterators/bidirectional_iterator.h"

template <typename T>
class CircularLinkedList : public List<T> {
public:
    CircularLinkedList() : List<T>() {}


    //Listo
    T front() {
        if(!empty()){
            return this->head->data;
        }
        else {
            throw exception();
        }
    };


    //Listo
    T back(){
        if(!empty()){
            return this->head->prev->data;

        }
        else {
            throw exception();
        }

    };


    //Listo
    void push_front(T elemento){
        auto temp = new Node<T>;
        temp->data = elemento;
        if(empty())
        {
            this->head = temp;
            this->tail = temp;
            this->head->next = this->tail;
            this->head->prev = this->tail;
            this->tail->next = this->head;
            this->tail->prev = this->head;
        }
        else
        {
            temp->next = this->head;
            this->head->prev = temp;
            temp->prev = this->tail;
            this->tail->next = temp;
            this->head = temp;
        }
        this->nodes++;

    };



    //Listo
    void push_back(T elemento){
        auto temp = new Node<T>;
        temp->data = elemento;
        if(empty())
        {
            this->head = temp;
            this->tail = temp;
            this->head->next = this->tail;
            this->head->prev = this->tail;
            this->tail->next = this->head;
            this->tail->prev = this->head;
        } else
        {
            this->tail->next = temp;
            temp->prev = this->tail;
            temp->next = this->head;
            this->head->prev = temp;
            this->tail = temp;
        }
        this->nodes++;
    };


    //Listo
    void pop_front(){
        if(!empty())
        {
            auto temp = this->head;
            if(size() == 1)
            {
                this->head = nullptr;
                this->tail = nullptr;
            }
            else {
                this->head = this->head->next;
                this->head->prev = this->tail;
                this->tail->next = this->head;
                delete temp;
            }
            this->nodes--;
        }
        else
        {
            throw exception();
        }
    };


    //Listo
    void pop_back(){
        if (!empty()){

            this->tail->prev->next = this->head;
            this->head->prev = this->tail->prev;
            this->tail = this->tail->prev;
            this->nodes--;
        }
        else{
            this->head= nullptr;
        }
    };

    //Listo
    T operator[](int posicion){
        auto temp = this->head;
        for (int i = 0; i < posicion; i++) {
            temp = temp->next;
        }
        return temp->data;
    };

    //Listo
    bool empty(){
        return size() == 0;
    };

    //Listo
    int size(){
        return this->nodes;
    };

    //Listo
    void clear(){
        auto temp = this->head;
        while(temp->next!=this->head)
        {
            temp = temp->next;
            pop_front();
        }
        pop_back();
    };


    //Listo
    void sort(){
        for( int i = 0; i < size() - 1; i++){
            auto temp = this->head;

            for(int j = 0; j < size()-i-1; j++){
                if(temp->data > temp->next->data){
                    T data_temporal = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = data_temporal;
                }
                temp = temp->next;
            }
        }
    };


    //Listo
    void reverse(){
        T contenedor[size()];
        auto it = this->head;

        for (int i = 0; i < size() ; ++i) {
            contenedor[i] = it->data;
            it = it->next;
        }
        auto temp = this->tail;

        for (int i = 0; i < size() ; ++i) {
            temp->data = contenedor[i];
            temp = temp->prev;
        }
    };

    //void imprimir();

    BidirectionalIterator<T> begin(){
        return BidirectionalIterator<T>(this->head);
    };

    BidirectionalIterator<T> end(){
        return BidirectionalIterator<T>(this->tail->next);
    };

    string name() {
        return "Circular Linked List";
    }

    void merge(CircularLinkedList<T>& Circular_list){
        for(int i = 0; i < Circular_list.size();i++)
        {
            this->push_back(Circular_list[i]);
        }
    };
};

/*template<typename T>
void CircularLinkedList<T>::imprimir() {
    if (!empty()) {
        auto temp = this->head;
        for(int i = 0; i < size(); i++){
            cout << temp->data << " ";
            temp= temp->next;
        }
    }
    else {
        throw exception();
    }
}*/

#endif