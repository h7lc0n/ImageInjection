#include "../include/Encrypt.h"


Encrypt::Encrypt() { return; };
Encrypt::~Encrypt() { return; };

/**
 * @brief Initialization vector generator
 * 
 * @param max max value
 * @return uint type - returning Initialization vector (IV) value
 */
uint Encrypt::geniv(uint max) {
    uint iv = 0;

    //~ srand(time(0));
    //~ iv = rand();

    iv = 5;
    return abs(iv);
};

/**
 * @brief Encrypt Data
 * 
 * @param data original data/message
 * @param psk passkey or password
 * @param iv initialization vector
 * @return str type - returning encrypted message
 */
str Encrypt::encmsg(str data, str psk, uint iv) {
    str encdata;

    for (char ch : data) {
        std::cout << (int)ch << std::endl;
        encdata += ch;
    }
    return encdata;
};
