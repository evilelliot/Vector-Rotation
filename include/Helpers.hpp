#ifndef Helpers_hpp
#define Helpers_hpp

#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Helpers{
    public: 
    static vector<string> artos(char**, int);
    static bool parse(string, string);
    static string toLowercase(string);    
};

#endif