#include "../include/Rotation.hpp"
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;

void Rotation::Rotate2D(vector<float> v, vector<float> a){
    if(v.size() == 2 && a.size() == 1){
        float _x = (v[0] * cos(a[0])) - (v[1] * sin(a[0]));
        float _y = (v[0] * sin(a[0])) - (v[1] * cos(a[0]));  
        cout << "R= (" << _x << "," << _y << ")" << endl;    
    }else{
        cout << "Invalid vector" << endl;
    }
}