//
//  main.cpp
//  GitHub
//
//  Created by Roman Yemtsev on 10/26/17.
//  Copyright © 2017 Roman Yemtsev. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string a;
    
    cout << "Profiles: DopeBoy, Rob, Roman" << endl << endl;
    cout << "Input of your profile's name:" << endl << endl;
    getline(cin,a);
    cout << endl;
    
    if(a == "dope") cout << "Hello DopeBoy" << endl;
    else if(a == "rob") cout << "Hello Rob" << endl;
    else if(a == "roman") cout << "Hello Roman" << endl;
    
    cout << endl << endl;
    return 0;
}
