//
// Created by Jose Adrian on 29/04/2020.
//

#ifndef E2_FUNCIONES_H
#define E2_FUNCIONES_H
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


template<typename T>
void swap(T xp, T yp)
{
    T temp = xp;
    xp = yp;
    yp = temp;
}

template<typename T, typename cn>
int swaps(cn tren, T size_) {
    int i, j, swaap = 0, cont;
    char temporal, temporal2, max;
    cn temp = tren;
    sort(temp.begin(), temp.end());
    if (temp[size_ - 1] != tren[size_ - 1]) {
        for (int k = 0; k < size_ - 1; ++k) {
            max = tren[0];
            if (tren[k] >= max) {
                max = tren[k];
                cont = k;
            }
        }

        swaap = size_- (cont+1);

        if (tren[0] == temp[size_-1] && tren[size_-1] == temp[0]&& size_>2)
            swaap+=2;

        temporal2 = tren[size_ - 1];
        tren[size_ - 1] = tren[cont];
        tren[cont] = temporal2;

    }
    if(tren == temp)
        cout << "Optimal train swapping takes "<<swaap<<" swaps.";
    else{
    for(i = 0; i<size_-1; i++) {
        for(j = i+1; j<size_-1; j++)
        {
            if(tren[j] < tren[i]) {
                temporal = tren[i];
                tren[i] = tren[j];
                tren[j] = temporal;
                swaap+=1;
            }

        }
    }
        cout << "Optimal train swapping takes "<<swaap<<" swaps.";
    }






};


#endif //E2_FUNCIONES_H
