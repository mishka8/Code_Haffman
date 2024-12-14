#include <iostream>
#include <string>

using namespace std;

struct Node//узел дерева
{
    char key;//символ
    unsigned long long period_key;//частота символа
    
    Node *left;//левый потомок
    Node *right;//правый потомок
};

Node* getNode(char key, unsigned long long period_key, Node *left, Node *right)//выделение нового узла дерева
{
    Node* node = new Node();
    
    node->key = key;
    node->period_key = period_key;
    node->left = left;
    node->right = right;
    
    return node;
}

struct compare//сравнение для создания приоритета
{
    bool operator()(const Node *L, const Node *R)
    {
        return L->period_key > R->period_key;
    }
};

void tableOfValueCodes(Node *root, string str, )



int main()
{
  
    return 0;
}
