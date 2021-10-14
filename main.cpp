/**
 * @file main.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include "include/Helpers.hpp"
#include "include/Template.hpp"
#include "include/Tokenizer.hpp"
#include "include/Rotation.hpp"
#include "include/Translation.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int main(int argc, char* argv[]){
    Template t;
    Tokenizer tks;
    if(argc == 1){
        cout << "Check -h for help!" << endl;
    }else{
        vector<string> arguments = Helpers::artos(argv, argc);
        if(Helpers::parse(arguments[0], "Help")){
            t.help();
        }else if(Helpers::parse(arguments[0], "Credits")){
            t.credits();
        }else if(Helpers::parse(arguments[0], "Version")){
            t.version();
        }else if(Helpers::parse(arguments[0], "Rotate")){
            if(arguments.size() == 3){
                vector<float> vt = tks.numbers(arguments[1]);
                vector<float> an = tks.numbers(arguments[2]);

                Rotation::Rotate2D(vt, an);
            }else{
                cout << "See -h rotation for more information" << endl;
            }
        }else if(Helpers::parse(arguments[0], "Translate")){
            if(arguments.size() == 3){
                vector<float> v = tks.numbers(arguments[1]);
                vector<float> t = tks.numbers(arguments[2]);
                
                Translation::Translate2D(v,t);
            }else{
                cout << "See -h translation for more information" << endl;
            }
        }
    }
    return 0;
}