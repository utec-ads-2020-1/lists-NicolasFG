#ifndef LISTS_NICOLASFG_MASTER_ITERATOR_H
#define LISTS_NICOLASFG_MASTER_ITERATOR_H

#include "node.h"

template <typename T>
class Iterator {
protected:
    Node<T> *current;

public:
    Iterator() : current(nullptr) {};
    Iterator(Node<T> *node) : current(node) {};
    virtual T operator*() = 0;
};


#endif //LISTS_NICOLASFG_MASTER_ITERATOR_H
