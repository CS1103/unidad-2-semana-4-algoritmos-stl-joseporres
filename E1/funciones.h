//
// Created by Jose Adrian on 29/04/2020.
//

#ifndef E1_FUNCIONES_H
#define E1_FUNCIONES_H

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template <typename  T>
void permutaciones(T str){
    T temp = str;
    sort(temp.begin(),temp.end());
    do{
    } while(next_permutation(temp.begin(),temp.end()));

    next_permutation(str.begin(),str.end());
    if(str == temp)
        cout<<"No Successor";
    else
        cout<<str;
};

#endif //E1_FUNCIONES_H
