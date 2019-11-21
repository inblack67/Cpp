//
//  main.cpp
//  HelloWorlds
//
//  Created by Aman Bhardwaj on 11/22/19.
//  Copyright © 2019 Projects. All rights reserved.
//

#include <iostream>
using namespace std;

class Prologue
{
public:
    
    void intro()
    {
        cout<<"The contents will be added without explanation"<<endl;
        cout<<"for your interpretation"<<endl;
    }
    
};

int main()
{
    Prologue obj;
    obj.intro();
    return 0;
    
}
