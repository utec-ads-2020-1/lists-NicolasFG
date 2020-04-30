#ifndef BIDIRECTIONAL_ITERATOR_H
#define BIDIRECTIONAL_ITERATOR_H

#include "../iterator.h"


// TODO: Implement all methods
template <typename T>
class BidirectionalIterator: public Iterator<T> {

public:
    BidirectionalIterator(){};
    BidirectionalIterator(Node<T> *node) : Iterator<T>(node) {};

    BidirectionalIterator<T> operator = (BidirectionalIterator<T> siguiente_igual){
        this->current = siguiente_igual.current;
        return *this;
    }

    bool operator != (BidirectionalIterator<T> elemento_diferente){
        return this->current != elemento_diferente.current;
    };

    BidirectionalIterator<T> operator++() {
        if(this->current)
            this->current = this->current->next;
        return *this;
    };

    BidirectionalIterator<T> operator--(){
        if(this->current)
            this->current = this->current->prev;
        return *this;
    };

    T operator*(){
        // Si current es nullptr?
        return this->current->data;
    };
};

#endif