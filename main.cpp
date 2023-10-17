#include <iostream>
#include <cassert>
#include "MyBST.h"

int main() {
    MyBST tree;

    // Insertar elementos
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(12);
    tree.insert(18);


    // Impresión de recorridos
    std::cout << "Recorrido Preorden: ";
    tree.preorder(); // Debe imprimir "10 5 3 7 15 12 18 "
    std::cout << std::endl;

    std::cout << "Recorrido Inorden: ";
    tree.inorder(); // Debe imprimir "3 5 7 10 12 15 18 "
    std::cout << std::endl;

    std::cout << "Recorrido Postorden: ";
    tree.postorder(); // Debe imprimir "3 7 5 12 18 15 10 "
    std::cout << std::endl;

    std::cout << "Recorrido por Niveles: ";
    tree.level(); // Debe imprimir "10 5 15 3 7 12 18 "
    std::cout << std::endl;


    // Verificar si el árbol no está vacío
    assert(!tree.isEmpty());

    // Longitud del árbol (número de elementos)
    assert(tree.length() == 7);

    // Búsqueda de elementos
    assert(tree.search(10)); // Debe encontrar el 10
    assert(!tree.search(8)); // No debe encontrar el 8

    // Búsqueda recursiva
    assert(tree.searchRec(5));
    assert(!tree.searchRec(20));

    // Nivel de un elemento

    // Altura del árbol
    std::cout << tree.height() << std::endl;
    assert(tree.height() == 3);

    // Impresión de ancestros
    std::cout << "Ancestros de 7: ";
    tree.ancestors(9); // Debe imprimir "Ancestros de 7: 10 5 "
    std::cout << std::endl;



    return 0;
}
