#ifndef PBL2_NODE_H
#define PBL2_NODE_H
template<class U>
class Node {
private:
    Node* next;
    Node* prev;
    U data;
    template<class V> friend class List;
public:
    Node(U data);
    Node<U>* GetNext();
    Node<U>* GetPrev();
    U& GetData();
};

template<class U>
Node<U>::Node(U data) {
    this->next = this->prev = nullptr;
    this->data = data;
}

template<class U>
Node<U> *Node<U>::GetNext() {
    return this->next;
}

template<class U>
Node<U> *Node<U>::GetPrev() {
    return this->prev;
}

template<class U>
U &Node<U>::GetData() {
    return this->data;
}

#endif //PBL2_NODE_H
