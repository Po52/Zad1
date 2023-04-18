#include <iostream>
#include <vector>

using namespace std;

#include "Forest.hpp"

Forest::Forest()
{
    int i;

    tabY = 25;
    tabX = 100;
    tab = new int*[tabY];
    for(i=0; i<tabY; i++)
       tab[i] = new int[tabX];

}

Forest::~Forest()
{
    int i;

    for(i=0; i<tabY; i++)
       delete tab[i];
    delete tab;

    for(auto t : trees)
        delete t;
    trees.clear();

}

void Forest::printTab()
{
    int i, j, ind;
    for(i=0; i<tabY; i++){
        for(j=0; j<tabX; j++){
            ind = tab[i][j];
            if(ind)
            {
    
                cout << trees[ind-1]->color;
                cout << trees[ind-1]->symbol;
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

void Forest::AddTree(int x, int y, int h, char s, string color){
    int i,j;
    Tree *t = new Tree(h, s, color);
    trees.push_back(t);

    for(i=0; i<t->height; i++)
       for(j=0; j<t->getWidth(); j++)
            if(t->tab[i][j])
                tab[i+x][j+y] = trees.size();


}
