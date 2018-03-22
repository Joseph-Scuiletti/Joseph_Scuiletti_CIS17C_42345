/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "RowAray.h"
#include <iostream>
using namespace std;
RowAray::RowAray(unsigned int c){
    size=c;
    rowData=new int[c];            //Row array
    for (int i=0;i<c;i++){
        rowData[i]=rand()%89+10;
    }
}
void RowAray::setData(int c,int a){
    rowData[c]=a;
}
RowAray::~RowAray(){
    delete []rowData;
}
