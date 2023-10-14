//
// Created by fredi on 6/10/23.
//

#ifndef BINARYTREES_MYBST_H
#define BINARYTREES_MYBST_H

typedef struct Node{
    int data;
    Node * left,
         * right;

    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    Node(int data, Node * left, Node * right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }

}Node;

class MyBST{
private:
    int size;
    Node* root;
    bool search(int data,Node* current);
    void preorder(Node* current);
    void inorder(Node* current);
    void postorder(Node* current);
    //En caso de hacer alguno de los métodos recursivos y necesiten
    //otro método que haga la recursión deben de colocarlo como privado
    //sólo la función de preparación sería pública
public:
    MyBST();
    int length();
    bool isEmpty();
    bool search(int data);

    //--Busqueda recursiva--//
    bool searchRec(int data);
    bool searchRec(int data, Node * current);
    //--Busqueda recursiva--//


    bool insert(int data);//true si lo inserto o no
    bool remove(int data);//si el valor estaba en el árbol lo borra
    //y regresa true, caso contrario sólo regresa false
    //Estudiar borrado en BST
    //Estudiar AVL
    void preorder();
    void inorder();
    void postorder();
    void level();
    void visit(int type);//Type: 1->preorder,2->inorder.3->postorder,4->level
    int height();//regresa la altura del BST.
    void ancestors(int data);//imprime los ancestros del valor pasado.
    //el orden de impresión debe ser de la raíz
    //hacía abajo.
    //Si valor no se localiza en el árbol no imprime nada
    int whatLevelAmI(int data);//regresa el nivel en que se encuentra el valor
    //dentro del árbol. Si el valor no está en árbol imprime -1
};

#endif //BINARYTREES_MYBST_H
