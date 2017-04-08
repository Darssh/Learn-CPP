//
//  Transaction.hpp
//  SimpleClasses
//
//  Created by Darssh on 4/7/17.
//  Copyright © 2017 Darsh. All rights reserved.
//

#include <string>

class Transaction {
    private:
        int amount;
        std::string type;
    public:
        Transaction(int amt, std::string kind);
        std::string Report();
};
