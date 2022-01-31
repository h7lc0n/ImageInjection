#pragma once

#ifndef __DECRYPT_H__
#define __DECRYPT_H__

#include "stdhdr.h"

class Decrypt {
    str decmsg(str enc_msg, uint iv);

    Decrypt();
    ~Decrypt();
};

#endif // __DECRYPT_H__
