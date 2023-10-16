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

bool MyBST::remove(int data) {
    // Si la lista está vacía, no podemos borrar
    if (isEmpty())
    {
        return false;
    }

    //Buscamos el nodo a borrar y su padre

    Node *current = root;  // ptr para recorrer el árbol, terminará en el nodo a borrar
    Node* parent = nullptr;  // Padre del nodo a borrar, se encontrará en el ciclo de busqueda

    while (current != nullptr)
    {
        if (current->data == data)
        {
            // Si se encontró el nodo con el dato a borrar, 'current' lo contiene y 'parent' contiene a su padre
            break;
        }
        parent = current;  // Actualizar al padre antes de continuar con la búsqueda binaria

        // Continuar por la izquierda o la derecha
        if (data < current->data)
        {
            current = current->left;
        } else
        {
            current = current->right;
        }
    }

    if (current == nullptr)
    {
        // Caso en el que no se encuentre el valor buscado
        return false;
    }

    // Proceso de borrar //

    //1) Si el nodo a borrar no tiene hijos
    if (current->left == nullptr && current->right == nullptr)
    {
        // Decidir si borrar el nodo izquierdo o derecho del padre
        if (parent != nullptr)
        {
            if (parent->left == current)
            {
                parent->left = nullptr;
            }
            else
            {
                parent->right = nullptr;
            }
        }
        else
        {
            // Si no hay padre, el nodo a borrar es el nodo raíz
            root = nullptr;
        }
        delete current;
        return true;
    }

    // 2) Si tiene 1 hijo
    if (current->left == nullptr)
    {
        // El nodo a borrar solo tiene un hijo a la derecha
        if (parent != nullptr)
        {
            if (parent->left == current)
            {
                parent->left = current->right;
            }
            else
            {
                parent->right = current->right;
            }
        }
        else
        {
            // Si no hay padre, el nodo a borrar es el nodo raíz
            root = current->right;
        }
        delete current;
        return true;
    }
    else if (current->right == nullptr)
    {
        // El nodo a borrar solo tiene un hijo a la izquierda
        if (parent != nullptr)
        {
            if (parent->left == current)
            {
                parent->left = current->left;
            } else
            {
                parent->right = current->left;
            }
        }
        else
        {
            // Si no hay padre, el nodo a borrar es el nodo raíz
            root = current->left;
        }
        delete current;
        return true;
    }


    //3) El nodo a borrar tiene 2 hijos
    if (current->left != nullptr && current->right != nullptr)
    {
        Node* parentOfPredecessor = current;
        Node* predecessor = current->left;

        // Encontrar el predecesor inorden (el nodo más grande en el subárbol izquierdo)
        while (predecessor->right != nullptr)
        {
            parentOfPredecessor = predecessor;
            predecessor = predecessor->right;
        }

        // Reemplazar el valor del nodo actual con el valor del predecesor inorden
        current->data = predecessor->data;

        // Eliminar el predecesor inorden
        if (parentOfPredecessor == current)
        {
            parentOfPredecessor->left = predecessor->left;
        } else
        {
            parentOfPredecessor->right = predecessor->left;
        }

        delete predecessor;
        return true;
    }

    return false;
}



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
        std::cout << current->data << ", ";
        inorder(current->right);
    }
}
void MyBST::inorder() {
    inorder(root);
}

//Preorder
void MyBST::preorder(Node *current)
{
    if (current == nullptr)
    {
        return;
    }

    preorder(current->left);
    preorder(current->right);
    std::cout << current->data << ", ";

}
void MyBST::preorder()
{
    preorder(this->root);
}

//Postrder
void MyBST::postorder(Node *current)
{
    if(current == nullptr)
    {
        return;
    }
    postorder(current->left);
    postorder(current->right);
    std::cout << current->data << ", ";

}
void MyBST::postorder()
{
    postorder(this->root);
}

//level
void MyBST::level()
{

}

//visit
void MyBST::visit(int type)
{
    //Validar que type esté entre 1 y 4
    if (type >= 1 && type <= 4)
    {
        //Type: 1->preorder,2->inorder.3->postorder,4->level
        switch (type)
        {
            case 1:
                preorder();
                break;
            case 2:
                inorder();
                break;
            case 3:
                postorder();
                break;
            case 4:
                level();
                break;
        }
    }
    else
    {
        std::cout << "Type not valid" << std::endl;
    }
}



//Level and height


int MyBST::height(Node *current)
{
    if (this->root == nullptr)
    {
        return -1; // Si es arbol está vacio, regresar -1
    }
    else
    {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return std::max(leftHeight, rightHeight) + 1;
    }
}
int MyBST::height()
{
    return height(this->root);
}

int MyBST::whatLevelAmI(int data)
{
    if(isEmpty())
    {
        return -1;
    }

    Node * current = root; //ptr para ir recorriendo el arbol
    int level_count = 1; //contador del nivel del nodo actual
    while (current != nullptr)
    {
        //si llegamos al nodo buscado, return el nivel en el que se encuentra
        if(current->data == data)
        {
            return level_count;
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
        level_count++;
    }
    return -1; //El nodo no se encuentra en el arbol

}








