#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

int main() {
    try {
        std::unique_ptr<Account> acc1 = std::make_unique<Checking_Account>("My broke ass", 500);
        std::cout << "Using my broke ass account." << std::endl;
        acc1->withdraw(100);
    }
    catch (const IllegalBalanceException &ex){
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException &ex){
        std::cerr << ex.what() << std::endl;
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

