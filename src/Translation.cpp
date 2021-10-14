#include "../include/Translation.hpp"
#include <vector>
#include <iostream>
using namespace std;

// Translate a 2D vector point
void Translation::Translate2D(vector<float> v, vector<float> t){
    float x, y, _x, _y, a, b;
    x  = v[0]; y  = v[1];
    a  = t[0]; b  = t[1];
    if(v.size() == 4){
        _x = v[2]; _y = v[3];
        cout << "R₁ = (" << x + a << "," << y + b << ")" << endl;
        cout << "R₂ = (" << _x + a << "," << _y + b << ")" << endl;
    }else{
        cout << "R = (" << x + a << "," << y + b << ")" << endl;
    }
}