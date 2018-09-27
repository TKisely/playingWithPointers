//
// Created by Kisely Tamás on 2018. 09. 27..
//

#include <climits>
#include "cheaterArray.h"


CheaterArray::CheaterArray() {
    if(items)delete[]items;
    int *pTemp=new int[1];
    pTemp[0]=-1;
    items=pTemp;
    elementNum=0;
}

CheaterArray::~CheaterArray() {

}

bool CheaterArray::makeItThisBig(int size) {
    if(size>INT_MAX)return false;


}

bool CheaterArray::eraseItems() {
    return false;
}

bool CheaterArray::addItemFirst(int item) {
    return false;
}

bool CheaterArray::addItemLast(int item) {
    return false;
}

bool CheaterArray::addItemToPos(int where, int what) {
    return false;
}

int CheaterArray::getFirstItem() {
    return 0;
}

int CheaterArray::getLastItem() {
    return 0;
}

int CheaterArray::getItemFromPos(int where) {
    return 0;
}

int CheaterArray::getSize() {
    return 0;
}

int CheaterArray::getElementNum() {
    return 0;
}

int CheaterArray::isEmpty() {
    return 0;
}

void CheaterArray::printAllItemsToConsole() {

}
