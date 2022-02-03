#pragma once

#ifndef __ENCRYPT_H__
#define __ENCRYPT_H__

#include "stdhdr.h"

class Encrypt {
public:
    uint geniv(uint max);
    str encmsg(str data, str psk, uint iv);

    Encrypt();
    ~Encrypt();
};

#endif // __ENCRYPT_H__
