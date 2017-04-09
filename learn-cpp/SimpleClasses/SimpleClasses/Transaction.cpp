//
//  Transaction.cpp
//  SimpleClasses
//
//  Created by Darssh on 4/7/17.
//  Copyright © 2017 Darsh. All rights reserved.
//

#include "Transaction.hpp"


using namespace std;

Transaction::Transaction(int amt, std::string kind):amount(amt),type(kind) {
}

string Transaction::Report() {
    string report;
    report += "    ";
    report += type;
    report += "  ";
    report += to_string(amount);
    
    return report;
}
