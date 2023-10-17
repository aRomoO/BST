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
    int size;   //numero de elementos en el árbol
    Node* root; //ptr to root node

    //Metodos privados de funciones recursivas
    bool searchRec(int data, Node * current);
    void preorder(Node* current); //O(n)
    void inorder(Node* current); //O(n)
    void postorder(Node* current); //O(n)
    int height(Node*current); // O(n)
    bool ancestors(Node *current,int data); //O(n)


public:
    MyBST(); //O(1)
    int length(); //O(1)
    bool isEmpty(); //O(1)
    bool search(int data); //O(log n)   / O(n) en el peor de los casos

    //Busqueda recursiva
    bool searchRec(int data); //O(log n)   / O(n) en el peor de los casos
    bool insert(int data);// //O(log n)   / O(n) en el peor de los casos
    bool remove(int data); ////O(log n)   / O(n) en el peor de los casos
    void preorder(); //O(n)
    void inorder(); //O(n)
    void postorder(); //O(n)
    void level(); //O(n)
    void visit(int type); //O(1)


    int height(); // O(n)

    void ancestors(int data); //O(n)
    int whatLevelAmI(int data); //O(log n)  /   O(n) en el peor de los casos

};

#endif //BINARYTREES_MYBST_H
