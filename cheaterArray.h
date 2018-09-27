//
// Created by Kisely Tamás on 2018. 09. 27..
//

#ifndef SZIVARRAYEXAMPLE_CHEATERARRAY_H
#define SZIVARRAYEXAMPLE_CHEATERARRAY_H

//only can hold positive numbers
//last element -1

class CheaterArray{

    int *items;
    int elementNum;
    bool initialized=false;
public:
    CheaterArray();
    ~CheaterArray();

    bool makeItThisBig(int size);
    bool eraseItems();

    bool addItemFirst(int item);
    bool addItemLast(int item);
    bool addItemToPos(int where, int what);

    int getFirstItem();
    int getLastItem();
    int getItemFromPos(int where);

    int getSize();
    int getElementNum();
    int isEmpty();

    void printAllItemsToConsole();

};

#endif //SZIVARRAYEXAMPLE_CHEATERARRAY_H
