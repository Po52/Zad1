#include <iostream>
using namespace std;
#include <vector>
#include "forest.hpp"

Forest::Forest()
{
    int j;
    H=100;
    W=25;
    tab = new int*[W];
    for(j=0; j<W ; j++)
    {
        tab[j] = new int[H];
    }
}

Forest::~Forest()
{
    int i;

    for(i=0; i<W; i++)
    {
        delete tab[i];
    }
    delete tab;
    
    for(auto t : trees)
    {
        delete t;
    }
    trees.clear();

}

void Forest::AddTree(int x, int y, int h, char s, string c)
{
    int i, j;
    Tree *drzewko=new Tree(h,s,c);
    trees.push_back(drzewko);

    for(j=0;j<drzewko->height;j++)
    {
        for(i=0;i<drzewko->Width();i++)
        {
            if(drzewko->tab[j][i])
            tab[j+x][i+y]=trees.size();
        }
    }
}
void Forest::printTree()
{
    int i,j,k;
    for(j=0;j<W;j++)
        {
            for(i=0;i<H;i++)
            {
                k=tab[j][i];
                if(k)
                {
                    cout << trees[k-1]->color;
                    cout << trees[k-1]->symbol;
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << endl;
            cout << "\033[0m";
        }
}
