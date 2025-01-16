#pragma once
#include <iostream>

class Fixed{
    private:
        int fixed_point;
        static const int fixed_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& copy);
        Fixed &operator=(const Fixed& fixed_new);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};