#include <iostream>
#include <vector>
using namespace std;
#include "Forest.hpp"


int main() {

 //Tree drzewko(5, '*', "green")   //  drzewko.height = 4;
                                    // drzewko.symbol = '*';
                                    //drzewko.color = 'green';
  
  //tuja.printTree();

  Forest las;
  las.AddTree(3, 3, 5, '*', "green");
  las.AddTree(5, 15, 8, '#', "bgreen");
  las.AddTree(7, 5, 7, '#', "red");

  las.printTab();


  
  
}
