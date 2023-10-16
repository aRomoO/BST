//
// Created by fredi on 6/10/23.
//

#ifndef BINARYTREES_MYBST_H
#define BINARYTREES_MYBST_H



/* TODO
 *
 * LEVEL
 * ANCSETOR
 *
 *
 * */

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
    int size;   //numero de elementos en el árbol
    Node* root; //ptr to root node
    //bool search(int data,Node* current);
    void preorder(Node* current); //OK
    void inorder(Node* current); //OK
    void postorder(Node* current); //OK

    //Funciones recursivas
    bool searchRec(int data, Node * current);
public:
    MyBST(); //OK
    int length(); //OK
    bool isEmpty(); //OK
    bool search(int data); //OK

    //Busqueda recursiva
    bool searchRec(int data); //OK
    bool insert(int data);// OK
        // - true si lo inserto o no
    bool remove(int data); //OK
        //si el valor estaba en el árbol lo borra
        //y regresa true, caso contrario sólo regresa false


    void preorder(); //OK
    void inorder(); //OK
    void postorder(); //OK
    void level();
    void visit(int type); //OK
        //Type: 1->preorder,2->inorder.3->postorder,4->level

    int height(); // OK -- regresa la altura del BST.
    int height(Node*current); // OK

    void ancestors(int data);

        //imprime los ancestros del valor pasado.
        //el orden de impresión debe ser de la raíz
        //hacía abajo.
        //Si valor no se localiza en el árbol no imprime nada


    int whatLevelAmI(int data); //OK
        //regresa el nivel en que se encuentra el valor
        //dentro del árbol. Si el valor no está en árbol regresa -1
};

#endif //BINARYTREES_MYBST_H
