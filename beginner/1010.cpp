#include <iostream>
#include <sstream>

using namespace std;

void getNumberFromString(string line){
    stringstream str_strm;
    str_strm << line;
    string temp_str;
    int temp_int;

    while(!str_strm.eof()){
        str_strm >> temp_str;
        if(stringstream(temp_str) >> temp_int){
            cout << temp_int << " ";
        }
        temp_str = "";
    }
}

int main(){
    string my_str = "12 1 5";
    getNumberFromString(my_str);
    return 0;
}
