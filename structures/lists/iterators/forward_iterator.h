#ifndef FORWARD_ITERATOR_H
#define FORWARD_ITERATOR_H

#include "../iterator.h"

// TODO: Implement all methods
template <typename T>
class ForwardIterator : public Iterator<T> {

public:
    ForwardIterator(){};
    ForwardIterator(Node<T> *node) : Iterator<T>(node) {};
    ForwardIterator<T> operator = (ForwardIterator<T>);
    bool operator!=(ForwardIterator<T>);
    ForwardIterator<T> operator++();
    T operator*();
};


template<typename T>
ForwardIterator<T> ForwardIterator<T>::operator=(ForwardIterator<T> elemento_igual) {
    this->current = elemento_igual.current;
    return *this;
}

template<typename T>
bool ForwardIterator<T>::operator!=(ForwardIterator<T> elemento_diferente   ) {
    return this->current != elemento_diferente.current;
}


template<typename T>
ForwardIterator<T> ForwardIterator<T>::operator++() {
    if(this->current)
    this->current = this->current->next;
    return *this;
}

template<typename T>
T ForwardIterator<T>::operator*() {
    return this->current->data;
}
#endif