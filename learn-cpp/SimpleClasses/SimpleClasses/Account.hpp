//
//  Account.hpp
//  SimpleClasses
//
//  Created by Darssh on 4/7/17.
//  Copyright © 2017 Darsh. All rights reserved.
//

#include <vector>
#include <string>
#include "Transaction.hpp"

class Account {
    private:
        int balance;
        std::vector<Transaction> log;
    public:
        Account();
        std::vector<std::string> Report();
        bool Deposit(int amt);
        bool Withdraw(int amt);
};
