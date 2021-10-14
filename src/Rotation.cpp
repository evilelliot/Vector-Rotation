/**
 * @file Rotation.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include "../include/Rotation.hpp"
#include "../include/Helpers.hpp"
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;

void Rotation::Rotate2D(vector<float> v, vector<float> a){
    float _x = 0, _y = 0, x, y, c = 0, s = 0, rad = 0;
    if(v.size() == 2 && a.size() == 1){
        rad = Helpers::degRad(a[0]);
        c   = cos(rad);   s = sin(rad);
        x   = v[0];       y = v[1];

        _x = 0 + cos(rad) * (x - 0) - sin(rad) * (y - 0);
        _y = 0 + sin(rad) * (x - 0) + cos(rad) * (y - 0);

        cout << "R= (" << _x << "," << _y << ")" << endl;    
    }else{
        cout << "Invalid vector" << endl;
    }
}

