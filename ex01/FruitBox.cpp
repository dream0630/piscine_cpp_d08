#include "FruitBox.h"

FruitBox::FruitBox(int size) : _size(size), _nbrFruits(0), _list(0) {}

FruitBox::~FruitBox() {}

int FruitBox::nbFruits() const {
return this->_nbrFruits;
}

bool FruitBox::putFruit(Fruit* f) {
    FruitNode   *tmp;
    FruitNode   *elt;

    tmp = this->_list;
    if (this->_nbrFruits == this->_size)
        return false;
    while (tmp != 0 && tmp->fruit != f)
        tmp = tmp->next;
    if (tmp != 0)
        return false;
    elt = new FruitNode();
    elt->fruit = f;
    elt->next = 0;
    tmp = this->_list;
    if (tmp == 0)
        this->_list = elt;
    else {
        while (tmp != 0 && tmp->next != 0)
            tmp = tmp->next;
        tmp->next = elt;
    }
    ++this->_nbrFruits;
    return true;
}

Fruit* FruitBox::pickFruit() {
    Fruit  *fruit;

    fruit = this->_list ? this->_list->fruit : 0;
    if (this->_list != 0)
        this->_list = this->_list->next;
    --this->_nbrFruits;
    return fruit;
}

FruitNode* FruitBox::head() {
    return this->_list;
}
