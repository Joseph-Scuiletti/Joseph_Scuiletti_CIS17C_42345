/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Table.h"
#include <iostream>
using namespace std;

Table::Table(unsigned int r, unsigned int c){
    szRow=r;                            //Size of Row
    szCol=c;                            //Size of Col
    columns=new RowAray*[r];            //New array object of RowAray
    for(int i=0;i<r;i++){
        columns[i]=new RowAray(szCol);  //columns(row) of rows(columns)
    }
}
Table::Table(const Table& a){
    szRow=a.getSzRow();                 //Size of Row
    szCol=a.getSzCol();                 //Size of Col
    columns=new RowAray*[szRow];        //New array object
    for(int i=0;i<szRow;i++){
        columns[i]=a.columns[i];
    }
}
void Table::setData(int r, int c, int a){
        columns[r]->setData(c,a);
}
int Table::getData(int r, int c) const{
    return columns[r]->getData(c);
}
Table::~Table(){
    delete []columns;
}