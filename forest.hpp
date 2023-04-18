
#include "Tree.hpp"


class Forest {
    private:
        int **tab;
        int tabX, tabY;
        vector<Tree*> trees;

    public:
        
        Forest();
        ~Forest();
        
        void printTab();
        void AddTree(int x, int y, int h, char s, string color);




};
