#include <iostream>
#include <sstream>

using namespace std;

void getNumberFromString(string line, int &code, double &price, double &quant){
    stringstream str_strm;
    str_strm << line; // string line is converted into stringstream
    string temp_str;
    int temp_int;
    string aux;

    while(!str_strm.eof()){
        str_strm >> temp_str;
        if(stringstream(temp_str) >> temp_int){
            aux = temp_int;
        }
        temp_str = "";
    }
}

int main(){
    string my_str = "Hello 12 World 1 5";
    getNumberFromString(my_str);
    return 0;
}
