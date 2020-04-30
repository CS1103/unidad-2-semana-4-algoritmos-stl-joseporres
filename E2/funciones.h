//
// Created by Jose Adrian on 29/04/2020.
//

#ifndef E2_FUNCIONES_H
#define E2_FUNCIONES_H
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template<typename T, typename cn>
int swaps(cn tren, T size_){
    cn temp = tren;
    bool f =true, r=true;
    int i=0, j = 0, swaap =0;
    char temporal;
    sort(temp.begin(),temp.end());

    for (int k = 0; k < size_-1 ; ++k) {
        if(tren == temp) {
            swaap += 1;
            return swaap;
        }
        else{
            for (int l = 0; l < size_-1 ; ++l) {
                if()

            }
        }
    }

    }
//
//    while(f){
//        j = i;
//        if(tren == temp)
//            f = false;
//        while(r){
//            if(tren[j] == temp[j])
//                r =false;
//            else{
//                temporal = tren[j];
//                tren[j] = tren[j+1];
//                tren[j+1] = temporal;
//                swaap +=1;
//
//            }
//        }
//        i+=1;
//        r =true;
//    }
//    cout<<"Optimal train swapping takes "<< swaap<< " swaps.";
//};



#endif //E2_FUNCIONES_H
