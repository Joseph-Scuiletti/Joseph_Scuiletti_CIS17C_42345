/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "PlusTab.h"
#include <iostream>
using namespace std;

PlusTab PlusTab::operator +(const PlusTab& a){
    int r=this->getSzRow();
    int c=this->getSzCol();
    PlusTab sum(r,c);
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            sum.setData(j,i,this->getData(j,i)+a.getData(j,i));
        }
    }
    return (sum);
}