#include "../include/Template.hpp"
#include <iostream>
using namespace std;

void Template::help(){
    cout << "------------------------------------------------" << endl;
    cout << R"(
  ____       _        _   _             
 |  _ \ ___ | |_ __ _| |_(_) ___  _ __  
 | |_) / _ \| __/ _` | __| |/ _ \| '_ \ 
 |  _ < (_) | || (_| | |_| | (_) | | | |
 |_| \_\___/ \__\__,_|\__|_|\___/|_| |_|
                                        
)" << '\n';
    cout << "------------------------------------------------" << endl;
    cout << "usage:\033[1;32m rotation \033[0m \033[1;33m[options]\033[0m \033[1;36m(arguments)\033[0m" << endl;
    cout << "-h  | -H  | help" << endl;
    cout << "-v  | -V  | version" << endl;
    cout << "-c  | -C  | credits" << endl;
    cout << "-r  | -R  | rotate [vector] [angle]" << endl;
    cout << "-t  | -T  | translate [vector] [position]" << endl;
    cout << "------------------------------------------------" << endl;
}
void Template::credits(){
    cout << "Made by: Alberto Ocaranza" << endl;
    cout << "2021" << endl;
}
void Template::version(){
    cout << "Version 1.0.0" << endl;
}