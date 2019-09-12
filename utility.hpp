#pragma once

#include <iostream>
using namespace std;



string convertString(string userString){
    string newString = "";


    for (int i = 0; i < userString.length(); i++){
        if (newString.length() >= newString.max_size()-5){
            break;
        }else {
            char index = userString.at(i);
            if (index == '&') {
                newString = newString + "&amp;";
            } else if (index == '<') {
                newString = newString + "&lt;";
            } else if (index == '>') {
                newString = newString + "&gt;";
            } else {
                newString = newString + index;
            }
        }
    }
    return newString;
}
