//
//  main.cpp
//  lastLab
//
//  Created by Roman Yemtsev on 10/26/17.
//  Copyright © 2017 Roman Yemtsev. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string a;
    
    cout << "Profiles: Jack, Sam, Roman" << endl << endl;
    cout << "Input of your profile's name:" << endl << endl;
    getline(cin,a);
    cout << endl;
    
    if(a == "jack") cout << "Hello Jack" << endl;
    else if(a == "sam") cout << "Hello sam" << endl;
    else if(a == "roman") cout << "Hello Roman" << endl;
    else if(a == "morty") cout << "Hello Morty" << endl;
    else cout << "Hello Guest" << endl;
    
    cout << "Your profile is loading...";
    
    cout << endl << endl;
    return 0;
}
