#include "tree.hpp"

class Forest
{
    private:
    int H, W;
    vector<Tree*> trees;
    int **tab;

    public:
    Forest();
    ~Forest();
    void AddTree (int x, int y, int h, char s, string c);
    void printTree();
};
