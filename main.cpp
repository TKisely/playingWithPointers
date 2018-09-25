#include <iostream>

#define ARRAYSIZE 5

int simpleGlobalArray[ARRAYSIZE];

bool addItemToSimpleGlobalArray(int where, int what){

    if(where<ARRAYSIZE){
        simpleGlobalArray[where]=what;
        return true;
    }
    else return false;
}

int getFromSimpleGlobalArray(int from){
    if(from<ARRAYSIZE){
        return simpleGlobalArray[from];
    } else return 0;
}

bool getFromSimpleGlobalArrayOnParameter(int from, int& retItem){
    if(from<ARRAYSIZE){
        retItem = simpleGlobalArray[from];
        return true;
    } else return false;
}

void printSimpleGlobalArrayToConsole(){
    for (int i = 0; i < ARRAYSIZE; ++i) {
        std::cout<<"Value at "<<"["<<i<<"] is \t"<<simpleGlobalArray[i]<<std::endl;
    }
    std::cout<<"---||---"<<std::endl;
}

int timesTwo(int num){
    std::cout<<"Addr. of num \t\t"<<&num<<std::endl;
    return num*2;
}

void timesTwoOnParameter(int& retItem){
    std::cout<<"Addr. of retItem \t"<<&retItem<<std::endl;
    retItem=retItem*2;
}

void firstAndLastElementOnParameter(int& first, int&last){
    first=simpleGlobalArray[0];
    last=simpleGlobalArray[ARRAYSIZE-1];
}

void evenNumbersToSimpleGlobalArray(){
    for (int i = 0; i < ARRAYSIZE; ++i) {
        simpleGlobalArray[i]=((i+1)*2);
    }
}

void iterateWithPointerAndAddOddNumbers(){
    int* pointer;
    pointer=simpleGlobalArray;
    for (int i = 0; i < ARRAYSIZE; ++i) {
        std::cout<<"Pointer points to \t"<<pointer<<std::endl;
        std::cout<<"Pointer addr. \t\t"<<&pointer<<std::endl;
        std::cout<<"Value at pointer \t"<<*pointer<<std::endl;

        *pointer=(10*(i+1));
        pointer++;
    }
}


int main() {
    int number=1;
    int otherNumber;
    int* pointerToNum;

    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    ;std::cout<<"---||---"<<std::endl;

    timesTwo(number);
    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    ;std::cout<<"---||---"<<std::endl;

    timesTwoOnParameter(number);
    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    ;std::cout<<"---||---"<<std::endl;

    pointerToNum=&number;
    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    ;std::cout<<"---||---"<<std::endl;

    *pointerToNum=10;
    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    std::cout<<"Value of other \t\t"<<otherNumber<<std::endl;
    std::cout<<"Addr. of other \t\t"<<&otherNumber<<std::endl;
    ;std::cout<<"---||---"<<std::endl;

    pointerToNum=&otherNumber;
    *pointerToNum=15;
    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    std::cout<<"Value of other \t\t"<<otherNumber<<std::endl;
    std::cout<<"Addr. of other \t\t"<<&otherNumber<<std::endl;
    ;std::cout<<"---||---"<<std::endl;

    std::cout<<"---||---"<<std::endl;

    printSimpleGlobalArrayToConsole();

    addItemToSimpleGlobalArray(2,8);
    printSimpleGlobalArrayToConsole();

    getFromSimpleGlobalArrayOnParameter(2,number);
    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    std::cout<<"---||---"<<std::endl;

    evenNumbersToSimpleGlobalArray();
    printSimpleGlobalArrayToConsole();


    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    std::cout<<"Value of other \t\t"<<otherNumber<<std::endl;
    std::cout<<"Addr. of other \t\t"<<&otherNumber<<std::endl;
    firstAndLastElementOnParameter(number,otherNumber);
    std::cout<<"Value of number \t"<<number<<std::endl;
    std::cout<<"Addr. of number \t"<<&number<<std::endl;
    std::cout<<"Value of other \t\t"<<otherNumber<<std::endl;
    std::cout<<"Addr. of other \t\t"<<&otherNumber<<std::endl;
    std::cout<<"---||---"<<std::endl;

    iterateWithPointerAndAddOddNumbers();
    std::cout<<"---||---"<<std::endl;

    printSimpleGlobalArrayToConsole();


    std::cout<<"---||---"<<std::endl;
    std::cout << "Succesfully executed" << std::endl;
    return 0;
}