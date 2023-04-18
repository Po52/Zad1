#include <iostream>
#include <string.h>
using namespace std;
#include "tree.hpp"

void Tree::printTree()
{
    int i, j;
    std:: string c;

    for(j=0; j<height; j++)
    {
        
        for(i=height-j; i>0; i--)
            cout << " ";

        for(i=0; i<2*j+1; i++)
            cout << symbol;

        cout << endl;
    }
    cout << "\033[0m" << endl; 
    PrintTreeFromTab();
}

void Tree:PrintTreeFromTab()
{
    int i,j;
    for(i=0;i<height; i++)
    {
        for(j=0; j<2*height+1; j++)
        {
            cout << tab[i][j];
        }
        cout << endl;
    }
}

Tree::Tree(int h, char s, string c ) //konstruktor
{
    height = h;
    symbol = s;
    //color = c;
    int i, j;

    if(c == "red") color = "\033[1;31m]";
    if(c == "green") color = "\033[0;32m]";
    if(c == "bgreen") color = "\033[1;32m]";

    tab = new int*[height];
    for(j=0; j<height; j++)
    {
        tab[j] = new int[2*height+1];
        for(i=0; i<2*height+1; i++)
        {
            tab[j][i]=0;
        }
    }
    for(j=0; j<height; j++)
    {
        for(i=0; i<2*j+1; i++)
        {
            tab[j][i+height-j]=1;
        }
    }

}

Tree::~Tree()
{
    int j;

    for(j=0; j<height; j++)
    {
        delete tab[j];
    }
    delete tab;
}

int Tree:Height()
{
    return height;
}

int Tree:Width()
{
    return height*2+1;
}



//   cout << "\033[1;31m Sample Text \033[0m"; <- daje kolory tekstu
