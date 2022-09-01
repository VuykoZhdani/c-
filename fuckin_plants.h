#include <iostream>

int tabs = 0;

struct Branch
{
    std::string title;
    std::string author;
    int yearOfPublication;
    std::string publishingHouse;
    int price;
    Branch* LeftBranch = nullptr;
    Branch* RightBranch = nullptr;
};


void Add(std::string aTitle, std::string aAuthor, int aYearOfPublication, std::string aPublishingHouse, int aPrice, Branch*& someBranch)
{

    if (!someBranch)
    {
        someBranch = new Branch;
        someBranch->title = aTitle;
        someBranch->author = aAuthor;
        someBranch->yearOfPublication = aYearOfPublication;
        someBranch->publishingHouse = aPublishingHouse;
        someBranch->price = aPrice;
        someBranch->LeftBranch = 0;
        someBranch->RightBranch = 0;
        return;
    }
    else
        if (someBranch->title > aTitle)
        {
            Add(aTitle, aAuthor, aYearOfPublication, aPublishingHouse, aPrice, someBranch->LeftBranch);
        }
        else
        {
            Add(aTitle, aAuthor, aYearOfPublication, aPublishingHouse, aPrice, someBranch->RightBranch);
        }
}
void AddBranch(Branch*& root, Branch* branch) {
    if (!branch)
        return;

    if (!root) {
        root = branch;
        return;
    }

    if (root->title > branch->title)
    {
        std::cout << "left " << root->LeftBranch << std::endl;
        AddBranch(root->LeftBranch, branch);
    }
    else
    {
        std::cout << "right " << root->RightBranch << std::endl;
        AddBranch(root->RightBranch, branch);
    }
}

void FreeTree(Branch* someBranch)
{
    if (!someBranch) return;
    FreeTree(someBranch->LeftBranch);
    FreeTree(someBranch->RightBranch);
    delete someBranch;
    return;
}


void Delete(Branch*& someBranch, std::string aAuthor) {
    if (!someBranch)
        return;
    if (someBranch->author == aAuthor) {
        Branch* left = someBranch->LeftBranch;
        Branch* right = someBranch->RightBranch;
        delete someBranch;
        someBranch = left;
        AddBranch(someBranch, right);
    }
    else {
        Delete(someBranch->LeftBranch, aAuthor);
        Delete(someBranch->RightBranch, aAuthor);
    }
}

void printBranch(Branch* someBranch) {
    std::cout << someBranch->title << std::endl;
    std::cout << someBranch->author << std::endl;
    std::cout << someBranch->yearOfPublication << std::endl;
    std::cout << someBranch->publishingHouse << std::endl;
    std::cout << someBranch->price << std::endl;
}

void publishingPrint(Branch* someNode, std::string aPublishingHouse) {
    if (!someNode)
        return;
    if (someNode->publishingHouse == aPublishingHouse) {
        std::cout << "-------------------\n";
        printBranch(someNode);
    }
    publishingPrint(someNode->LeftBranch, aPublishingHouse);
    publishingPrint(someNode->RightBranch, aPublishingHouse);
}

void overPrint(Branch* someBranch, int number) {
    if (!someBranch) return;
    else tabs += 5;
    if (number >= someBranch->publishingHouse.length()) {
        overPrint(someBranch->RightBranch, number);
        for (int i = 0; i < tabs; i++) std::cout << " ";
        std::cout << someBranch->title << std::endl;
        for (int i = 0; i < tabs; i++) std::cout << " ";
        std::cout << someBranch->author << std::endl;
        for (int i = 0; i < tabs; i++) std::cout << " ";
        std::cout << someBranch->publishingHouse << std::endl;
        for (int i = 0; i < tabs; i++) std::cout << " ";
        std::cout << someBranch->yearOfPublication << std::endl;
        for (int i = 0; i < tabs; i++) std::cout << " ";
        std::cout << someBranch->price << std::endl;


        overPrint(someBranch->LeftBranch, number);


    }
    tabs -= 5;
}

void print(Branch* someBranch)
{
    if (!someBranch) return;
    else tabs += 5;


    print(someBranch->RightBranch);

    for (int i = 0; i < tabs; i++) std::cout << " ";
    std::cout << someBranch->title << std::endl;
    for (int i = 0; i < tabs; i++) std::cout << " ";
    std::cout << someBranch->author << std::endl;
    for (int i = 0; i < tabs; i++) std::cout << " ";
    std::cout << someBranch->publishingHouse << std::endl;
    for (int i = 0; i < tabs; i++) std::cout << " ";
    std::cout << someBranch->yearOfPublication << std::endl;
    for (int i = 0; i < tabs; i++) std::cout << " ";
    std::cout << someBranch->price << std::endl;


    print(someBranch->LeftBranch);

    tabs -= 5;
}