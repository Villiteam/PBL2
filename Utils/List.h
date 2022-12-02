#ifndef PBL2_LIST_H
#define PBL2_LIST_H

#include "Node.h"

template<class T>
class List {
private:
    int length;
    Node<T>* first;
    Node<T>* last;
public:
    List();
    Node<T>* GetFirst();
    Node<T>* GetLast();
    void Insert(T data);
    void Delete(Node<T> *data);
    T& operator [](int i);
};

template<class T>
List<T>::List() {
    this->length = 0;
    this->first = this->last = nullptr;
}

template<class T>
Node<T> *List<T>::GetFirst() {
    return this->first;
}

template<class T>
Node<T> *List<T>::GetLast() {
    return this->last;
}

template<class T>
void List<T>::Insert(T data) {
    auto* node = new Node<T>(data);
    if(this->last == nullptr) {
        this->first = this->last = node;
    } else {
        node->prev = this->last;
        this->last->next = node;
        this->last = node;
    }
    this->length++;
}

template<class T>
T& List<T>::operator[](int i) {
    if(i<=0) {
        return this->first->data;
    } else if (i>=this->length-1) {
        return this->last->data;
    } else {
        Node<T>* temp = this->first;
        while(i--) temp = temp->next;
        return temp->data;
    }
}

template<class T>
void List<T>::Delete(Node<T>* data) {
    Node<T>* temp = data->prev;
    temp->next = data->next;
    data->next->prev = temp;
    delete data;
}

#endif //PBL2_LIST_H
