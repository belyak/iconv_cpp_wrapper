#include <iostream>

#include "Encoder.h"



int main(int argc, char** argv) {
    Encoder e;
    e.setEncoding("CP1251");
    std:string input_string("Test: А также проверка");
    std::cout << "Result: `" << e.decode(e.encode(input_string)) << "`\n";
    
    return 0;
}

