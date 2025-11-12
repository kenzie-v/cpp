// 15.7 PersonData and CustomerData Classes (pg.965)
#include "PersonData.h"
#include "CustomerData.h"
#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<PersonData> customer = std::make_unique<CustomerData>("V", "K", "1011 Aldebaran Ave",
                        "Long Beach", "CA", "10001", "6191234567", 2520399, true);
    customer->display();


    return 0;
}
