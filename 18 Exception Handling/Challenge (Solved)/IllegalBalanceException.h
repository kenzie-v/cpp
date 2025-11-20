#ifndef ILLEGALBALANCEEXCEPTION_H
#define ILLEGALBALANCEEXCEPTION_H
#include <exception>

class IllegalBalanceException : public std::exception {
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;

    const char* what() const noexcept override final {
        return "Illegal balance exception: Balance cannot be negative.";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
