
#include <bits/stdc++.h>

using namespace std;

    // Algorithm:  

    //     Initialize final ascii string as empty.
    //     Extract first two characters from the hexadecimal string taken as input.
    //     Convert it into base 16 integer.
    //     Cast this integer to character which is ASCII equivalent of 2 char hex.
    //     Add this character to final string.
    //     Extract next two characters from hexadecimal string and go to step 3.
    //     Follow these steps to extract all characters from hexadecimal string.

string hexToAscii(string hex){

    string hex_ascii = "";


    for(size_t i = 0; i < hex.length(); i += 2){
        
        string hex_substr = hex.substr(i, 2);

        char hex_substr_base16_char =  stoul(hex_substr, nullptr, 16);

        hex_ascii += hex_substr_base16_char;
        
    }

    return hex_ascii;

}

int main(){

    cout << hexToAscii("0244593032323130383235303101") << endl;

    return 0;

}