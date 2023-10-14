//
// Created by fredi on 6/10/23.
//

#include "MyBST.h"
#include "iostream"

//Constructor
MyBST::MyBST()
{
    this->root = nullptr;
    this->size = 0;
}

//Lenght
int MyBST::length() {

    return this->size;
}

//isEmpty
bool MyBST::isEmpty() {
    return this->root == nullptr;
    //return this->size == 0;
}

//Insert
bool MyBST::insert(int data) {
    //Si el árbol está vacio, la raíz será un nuevo nodo
    if (isEmpty())
    {
        this->root = new Node(data);
        return true;
    }

    // Ptr para navegar la lista
    Node *current = this->root;

    while (current != nullptr)
    {
        //Si el dato a insertar es menor al actual:
        if (data < current->data)
        {
            //Si llegamos al último nodo de la izquierda, insertar uno nuevo
            if (current->left == nullptr)
            {
                current->left = new Node(data);
                return true;
            }
            else
            {
                //Si no llegamos al ultimo nodo a la izquierda, movernos uno hacia abajo a la izq
                current = current->left;
            }

        }
        else
            //Si el dato a insertar es mayor
            if (data > current->data)
            {
                //Si llegamos al último de la derecha, insertar nuevo nodo
                if (current->right == nullptr)
                {
                    current->right = new Node(data);
                    return true;
                }
                //Si no llegamos al último nodo a la derecha, bajar un nodo hacia la derecha
                else
                {
                    current = current->right;
                }
            }
            else
        {
            // Si el dato está duplicado, regresar false
            return false;
        }
    }

    return false; // Caso en el que haya pasado algún error no previsto
}

//Remove
/*
bool MyBST::remove(int data) {
    //Si la lista está vacía, no podemos borrar
    if (isEmpty()) {
        return false;
    }


    Node *current = root; //ptr para ir recorriendo el arbol, terminará en el nodo a borrar
    Node* parent = nullptr;  // padre del nodo a borrar, se encontrará en el loop


    while (current != nullptr) {
        if (current->data == data)
        {
            // Si se encontró el nodo del dato buscado, current lo contiene y parent contiene a su padre
            // The parent node is stored in the "parent" variable.
            break;
        }
        parent = current;  // actualizar al padre anntes de seguir con la busqueda binaria

        //Continuar por la izquierda o la derecha
        if (data < current->data)
        {
            current = current->left;
        } else
        {
            current = current->right;
        }
    }

    if (current == nullptr) {
        // caso en el que no se encuentre el valor buscado
        return false;
    }

    //Proceso de borrar
    // 1) si el nodo a borrar no tiene hijos, borrar el nodo
    if(current->left == nullptr && current->left == nullptr)
    {
        //decidir si borrar el nodo izq o der
        parent->left == current ? parent->left == nullptr : parent->right == nullptr;
        delete(current);
        return true;
    }
    // 2) si tiene hijos, ligar con el padre



    return false;
}
*/


//search
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

//Recursive search
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
//----//

//Traversal
    //Inorder
void MyBST::inorder(Node *current) {
    if (current != nullptr) {
        inorder(current->left);
        std::cout << current->data;
        inorder(current->right);
    }
}
void MyBST::inorder() {
    inorder(root);
}
//-----//





