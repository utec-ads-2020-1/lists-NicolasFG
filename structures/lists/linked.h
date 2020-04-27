#ifndef LINKED_H
#define LINKED_H

#include "list.h"
#include "iterators/bidirectional_iterator.h"


template <typename T>
class LinkedList : public List<T> {
public:
    LinkedList() : List<T>() {}

    //Listo
    T front() {
        if(this->head!= nullptr){
            return this->head->data;
        }
        else {
            throw exception();
        }
    };

    //Listo
    T back(){
        if(this->tail!=nullptr){
            return this->tail->data;
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
            this->head= temp;
            this->tail= temp;
            temp->next= nullptr;
        }
        else{
            temp->next = this->head;
            this->head->prev = temp;
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
            temp->next= nullptr;
        }
        else{
            this->tail->next = temp;
            temp->prev=this->tail;
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
            else if(size()==1)
            {
                this->head= nullptr;
                this->tail= nullptr;
                delete temp;
            }

            this->nodes--;
        }
        else {
            throw exception();
        }
    };


    //Listo
    void pop_back(){
        if(!empty())
        {
            auto temp = this->tail;
            if(size()>1)
            {
                this->tail=this->tail->prev;
                this->tail->next= nullptr;
                delete temp;
            }
            else{
                this->head= nullptr;
                this->tail= nullptr;
                delete temp;
            }
            this->nodes--;
        }
        else {
            throw exception();
        }
    };

    //Listo
    T operator[](int posicion ){

        if(posicion > size() - 1 ){
            throw exception();
        }
        else {
            auto temp = this->head;
            for (int i = 0; i < posicion; i++) {
                temp = temp->next;
            }
            return temp->data;
        }
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
        while(!empty())
        {
            pop_back();
        }
    };

    //Listo
    void sort(){
        for(int i = 0; i < size()-1; i++){
            auto temp = this->head;
            for(int j = 0; j <size()-i-1; j++){

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
        if( this->nodes > 1){

            Node<T>* temp1= nullptr;
            Node<T>* temp2= this->head;
            Node<T>* temp3= temp2->next;

            while(temp2!= nullptr) {
                temp2->next=temp1;
                temp2->prev=temp3;
                temp1=temp2;
                temp2=temp3;
                if(temp3!= nullptr)
                {
                    temp3=temp3->next;
                }
            }
            Node<T>* temporal= this->head;
            this->head=this->tail;
            this->tail=temporal;}
    };


    //void imprimir();

    //Listo
    BidirectionalIterator<T> begin(){
        return BidirectionalIterator<T>(this->head);
    };

    //Listo
    BidirectionalIterator<T> end(){
        return BidirectionalIterator<T>(this->tail->next);
    };

    string name() {
        return "Linked List";
    }
    //Listo
    void merge(LinkedList<T>&linked){
        for(int i = 0; i < linked.size();i++)
        {
            this->push_back(linked[i]);
        }
    };
};


/*
template<typename T>
void LinkedList<T>::imprimir() {
    if (!empty()) {
        auto temp = this->head;
        for (int i = 0; i < size(); i++){
            cout << temp->data << " ";
            temp = temp->next;
        }
    } else{
        throw exception();
    }
}*/

#endif