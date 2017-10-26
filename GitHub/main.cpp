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
    
    if(a == "the dopest") cout << "Hello The dopestboy" << endl;
    else if(a == "the robbenson") cout << "Hello The Robbenson" << endl;
    else if(a == "the roman") cout << "Hello the Roman" << endl;
    else cout << "Hello Guest";
    
    cout << endl << endl;
    return 0;
}
