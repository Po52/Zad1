#include <iostream>
using namespace std;
#include "Tree.hpp"

void Tree::printTree()
{
   int i,j;
  
   for(i=0; i<height;i++){
     for(j=height-i; j>0; j--)
       cout << " ";
     
     for(j=0; j<2*i+1; j++){
        cout << symbol;
        //tab[i][j+height-i] = 1;
     }

      cout << endl;
   }
   cout << "\033[0m" << endl;  // color off

   printTreeFromTab();
  
}

void Tree::printTreeFromTab()
{
  int i,j;
  for(i=0; i<height; i++){ 
    for(j=0; j<2*height+1; j++)
       cout << tab[i][j];
    cout << endl;
  }
}

Tree::Tree(int h, char s, string c) //konstruktor
{
  int i,j;
  height = h;  
  symbol = s;
  //color = c;

  if(c == "red") color = "\033[1;31m";
  if(c == "green") color = "\033[0;32m";
  if(c == "bgreen") color = "\033[1;32m";
  if(c == "yellow") color = "\033[1;33m";
  if(c == "blue") color = "\033[1;34m";

  tab = new int*[height];
  for(i=0; i<height; i++)
  { 
    tab[i] = new int[2*height+1];
    for(j=0; j<2*height+1; j++)
      {
       tab[i][j] = 0;
      }
  }

   for(i=0; i<height;i++)
   {    
     for(j=0; j<2*i+1; j++)
     {
        tab[i][j+height-i] = 1;
     }
   }

}

Tree::~Tree()
{
  int i;
  
  cout << "kasuje drzewo\n";
  for(i=0; i<height; i++)
    {
     delete tab[i];
    }
  delete tab;

}

int Tree::getHeight(){
  return height;
}

int Tree::getWidth(){
  return height*2+1;
}
