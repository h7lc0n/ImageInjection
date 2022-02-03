#pragma once

#ifndef __DECRYPT_H__
#define __DECRYPT_H__

#include "stdhdr.h"

class Decrypt {
public:
    str decmsg(str encdata, uint iv);

    Decrypt();
    ~Decrypt();
};

#endif // __DECRYPT_H__
