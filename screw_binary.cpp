#include<iostream>
#include"fuckin_plants.h"
int main()
{
    Branch* Root = NULL;

    Add("taras chornozem", "Zenoviy Veres", 2003, "LPNU", 300, Root);
    Add("oleg", "Maxym Veres", 2001, "LPNU", 301, Root);
    Add("igor", "Tkachuk Zenoviy", 2002, "LPNU", 302, Root);
    Add("vasyl", "Kuba", 2004, "LPNU", 303, Root);
    Add("dima", "Marchuk", 2000, "LPNU", 304, Root);

    std::cout << "Output tree: " << std::endl;
    print(Root);
    std::cout << std::endl;

    Add("ivan", "Volosh", 2002, "LNU", 23214, Root);

    std::cout << "insert a node by title " << std::endl;
    print(Root);
    std::cout << std::endl;

    Delete(Root, "Marchuk");

    std::cout << "Output of a new binary tree: " << std::endl;
    print(Root);
    std::cout << std::endl;

    std::cout << "output nodes with a rating exceeding the specified" << std::endl;
    overPrint(Root, 12);

    publishingPrint(Root, "LPNU");

    FreeTree(Root);


    return 0;
}