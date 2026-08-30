#include <iostream>

int main() {
    std::cout<<"int: "<<sizeof(int)<<"\n";
    std::cout<<"float: "<<sizeof(float)<<"\n";
    std::cout<<"double: "<<sizeof(double)<<"\n";
    std::cout<<"char: "<<sizeof(char)<<"\n";
    std::cout<<"bool: "<<sizeof(bool)<<"\n";
    std::cout<<"long: "<<sizeof(long)<<"\n";
    std::cout<<"long long: "<<sizeof(long long)<<"\n";
    std::cout<<"short: "<<sizeof(short)<<"\n";
    std::cout<<"unsigned int: "<<sizeof(unsigned int)<<"\n";
    std::cout<<"unsigned long: "<<sizeof(unsigned long)<<"\n";
    std::cout<<"unsigned long long: "<<sizeof(unsigned long long)<<"\n";
    std::cout<<"unsigned short: "<<sizeof(unsigned short)<<"\n";
    std::cout<<"wchar_t: "<<sizeof(wchar_t)<<"\n";
    std::cout<<"size_t: "<<sizeof(size_t)<<"\n";
    std::cout<<"ptrdiff_t: "<<sizeof(ptrdiff_t)<<"\n";
    std::cout<<"nullptr_t: "<<sizeof(std::nullptr_t)<<"\n";
    std::cout<<"void*: "<<sizeof(void*)<<"\n";
    std::cout<<"int*: "<<sizeof(int*)<<"\n";
    std::cout<<"float*: "<<sizeof(float*)<<"\n";
    std::cout<<"double*: "<<sizeof(double*)<<"\n";
    std::cout<<"char*: "<<sizeof(char*)<<"\n";
    std::cout<<"bool*: "<<sizeof(bool*)<<"\n";
    std::cout<<"long*: "<<sizeof(long*)<<"\n";
    std::cout<<"long long*: "<<sizeof(long long*)<<"\n";
    std::cout<<"short*: "<<sizeof(short*)<<"\n";
    std::cout<<"unsigned int*: "<<sizeof(unsigned int*)<<"\n";
    std::cout<<"unsigned long*: "<<sizeof(unsigned long*)<<"\n";
    std::cout<<"unsigned long long*: "<<sizeof(unsigned long long*)<<"\n";
    std::cout<<"unsigned short*: "<<sizeof(unsigned short*)<<"\n";
    std::cout<<"wchar_t*: "<<sizeof(wchar_t*)<<"\n";
    std::cout<<"size_t*: "<<sizeof(size_t*)<<"\n";
    std::cout<<"ptrdiff_t*: "<<sizeof(ptrdiff_t*)<<"\n";
    std::cout<<"nullptr_t*: "<<sizeof(std::nullptr_t*)<<"\n";
    std::cout<<"void**: "<<sizeof(void** )<<"\n";
    std::cout << '\n';
    std::cout<<"int8_t: "<<sizeof(int8_t)<<"\n";
    std::cout<<"int16_t: "<<sizeof(int16_t)<<"\n";
    std::cout<<"int32_t: "<<sizeof(int32_t)<<"\n";
    std::cout<<"int64_t: "<<sizeof(int64_t)<<"\n";
    std::cout << '\n';
    std::cout<<"uint8_t: "<<sizeof(uint8_t)<<"\n";
    std::cout<<"uint16_t: "<<sizeof(uint16_t)<<"\n";
    std::cout<<"uint32_t: "<<sizeof(uint32_t)<<"\n";
    std::cout<<"uint64_t: "<<sizeof(uint64_t)<<"\n";
    std::cout << '\n';

    std::cout<<"Avoid the fast and least integral types because they may exhibit "
    <<"different behaviors on architectures where they resolve to different sizes.\n";
    std::cout << "least 8:  " << sizeof(std::int_least8_t)  * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  "  << sizeof(std::int_fast8_t)   * 8 << " bits\n";
	std::cout << "fast 16: "  << sizeof(std::int_fast16_t)  * 8 << " bits\n";
	std::cout << "fast 32: "  << sizeof(std::int_fast32_t)  * 8 << " bits\n";

    return 0;
}