#include <iostream>
#include <string.h>
using namespace std;
#include "forest.hpp"
#include <vector>

int main()
{
    //Tree drzewko(5, '*', "green")   //  drzewko.height = 4;
                                    // drzewko.symbol = '*';
                                    //drzewko.color = 'green';
  
    Forest las;
    las.AddTree(3, 3, 5,'*',"green");
    las.AddTree(5, 15, 8,'#',"red");
    las.AddTree(7, 5, 7, '#', "bgreen");
    
    las.printTree();

}
