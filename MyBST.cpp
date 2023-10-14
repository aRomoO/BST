//
// Created by fredi on 6/10/23.
//

#include "MyBST.h"

MyBST::MyBST()
{
    this->root = nullptr;
    this->size = 0;
}
int MyBST::length() {

    return this->size;
}

bool MyBST::isEmpty() {
    return this->root == nullptr;
    //return this->size == 0;
}

bool MyBST::insert(int data) {
    if (isEmpty())
    {
        this->root = new Node(data);
        return true;
    }

    //ptr para recorrer el arbol
    Node * current = nullptr;

    while(current->left != nullptr || current->right != nullptr)
    {
        //Si el dato es menor al current, movernos a la izquierda
        if(data < current->data)
        {
            current = current->left;
        }
            //Si el dato es mayor al current, movernos a la izquierda
        else
        {
            current = current->right;
        }
    }



}

bool MyBST::search(int data) {
    if(isEmpty())
    {
        return false;
    }
    //ptr para ir recorriendo el arbol
    Node * current = root;
    while (current != nullptr)
    {
        //si llegamos al nodo buscado, regresamos true
        if(current->data == data)
        {
            return true;
        }

        //Si el valor es menor al nodo actual, buscamos hacia la izquierda
        if(data < current->data)
        {
            current = current->left;
        }
        //Si el valor es mayor al nodo actual, buscamos hacia la derecha
        else
        {
            current = current->right;
        }
    }
    return false;

}

bool MyBST::searchRec(int data) {

    return searchRec(data, this->root);
}
bool MyBST::searchRec(int data, Node * current) {
    //Condicion de salida recursiva
    if(current == nullptr)
    {
        return false;
    }

    if(data == current->data)
    {
        return true;
    }

    if(data < current->data)
    {
        return searchRec(data, current->left);
    }
        //Si el valor es mayor al nodo actual, buscamos hacia la derecha
    else
    {
        return searchRec(data, current->right);

    }

}
