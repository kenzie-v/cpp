#ifndef INSUFFICIENTFUNDSEXCEPTION_H
#define INSUFFICIENTFUNDSEXCEPTION_H
#include <exception>

class InsufficientFundsException : public std::exception {
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;

    const char* what() const noexcept override final {
        return "Insufficient Funds Exception: Balance cannot be negative.";
    }
};

#endif