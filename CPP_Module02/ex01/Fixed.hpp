    #pragma once
    #include <iostream>

    class Fixed {
        private:
            int fixed_point;
            static const int fixed_bits = 8;
        public:
            Fixed();
            Fixed(const int fi);
            Fixed(const float ff);
            Fixed(const Fixed& copy);
            ~Fixed();
            Fixed &operator=(const Fixed& fixed_new);
            int getRawBits() const;
            void setRawBits(int const raw);
            float toFloat(void) const;
            int toInt(void) const;
    };
    std::ostream &operator<<(std::ostream &o, const Fixed& fixed_point);