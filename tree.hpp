using namespace std;

class Tree
{
    private:
    int height;
    char symbol;
    std:: string color;
    int **tab; //matryca

    public:
    Tree(int h, char s, string c );
    ~Tree();
    void printTreeFromTab();
    int Height();
    int Width();
    friend class Forest; //nie wywala bledow z private z forest.hpp

};
