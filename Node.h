//
// Created by damin on 21/09/18.
//

#ifndef SOLVER_IAN_ARIASSCH_MASTER_NODE_H
#define SOLVER_IAN_ARIASSCH_MASTER_NODE_H

#endif //SOLVER_IAN_ARIASSCH_MASTER_NODE_H

#include <iostream>
using namespace std;


struct node
{
    char data;
    node *left;
    node *right;
    node *root;


};

int search(string str, char operador)
{
    int i=0;
    for(char &x: str)
    {
       if(x == operador)
       {
           return i,1;
       }
        i++;
    }
}

void build(string str)
{
    node* nodo = new node;
    if(search(str, '+'))
    {
     nodo->data = '+';
    }
    nodo->left = str[i-1]


}