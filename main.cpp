#include "include/stdhdr.h"
#include "include/Encrypt.h"
#include "include/Decrypt.h"
#include "include/Inject.h"

int main(int argc, char** argv) {
    Encrypt encrypt;
    Decrypt decrypt;

    uint max = 100;
    str message = "Hello World";
    str password = "Password";
    uint iv = encrypt.geniv(max);

    std::cout << encrypt.encmsg(message, password, iv) << std::endl;

    return 0;
}
