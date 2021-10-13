/**
 * @file Helpers.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include "../include/Helpers.hpp"
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;


vector<string> Helpers::artos(char* data[], int argc){
    // Convert arg char to string
    vector<string> argList;
    for(int i = 1; i < argc; i++){
        argList.push_back(data[i]);
    }
    return argList;
}

bool Helpers::parse(string arg, string command){
    arg = toLowercase(arg);
    command = toLowercase(command);
    char fchar = command[0];
    return arg == command || arg == "-" + string(1, fchar);
}

string Helpers::toLowercase(string data){
    for_each(data.begin(), data.end(), [](char & ch) {
        ch = tolower(ch);
    });
    return data;
}

float Helpers::degRad(float degree){
    return degree * M_PI / 180;
}