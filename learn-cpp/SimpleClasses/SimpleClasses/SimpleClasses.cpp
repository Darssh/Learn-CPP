//
//  SimpleClasses.cpp
//  SimpleClasses
//
//  Created by Darssh on 4/7/17.
//  Copyright © 2017 Darsh. All rights reserved.
//

#include <iostream>
#include "Account.hpp"

using namespace std;


int main() {
    Account a1;
    a1.Deposit(90);
    
    cout << "After depositing $90" << endl;
    
    for (auto s:a1.Report()) {
        cout << s << endl;
    }
    
    a1.Withdraw(50);
    if(a1.WithDraw(100)) {
        cout << "second withdraw succeeds" << endl;
    }
    
    cout << "After withdrawing $50 then $100" << endl;
    
    for (auto s:a1.Report()) {
        cout << s << endl;
    }
    return 0;
}
