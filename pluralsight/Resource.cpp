//
//  Resource.cpp
//  pluralsight
//
//  Created by gali zorea on 17/09/2017.
//  Copyright © 2017 gali zorea. All rights reserved.
//

#include "Resource.hpp"
#include <iostream>
using namespace std;
Resource::Resource(std::string o_name):m_name(o_name)
{
    cout << "constructing " << m_name << endl;
}
Resource::~Resource()
{
    cout << "destructing " << m_name << endl;
}

