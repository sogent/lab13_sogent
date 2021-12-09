//
// Created by Sarah Ogent on 12/6/21.
//

#include "Lab13Functions.h"

template <typename dataType>
void mySwap(dataType userArr[], int arrSize, int pos1, int pos2){
    dataType temp;
    temp=userArr[pos1];
    userArr[pos1]=userArr[pos2];
    userArr[pos2]=temp;
}


template <typename dataType>
dataType myMin(dataType userArr[], int arrSize){
    dataType minVal=userArr[0];
    for(int i=0;i<arrSize;++i){
        if(userArr[i]<minVal){
            minVal=userArr[i];
        }
    }
    return minVal;
}

template <typename dataType>
dataType myMax(dataType userArr[], int arrSize){
    dataType maxVal=userArr[0];
    for(int i=0;i<arrSize;++i){
        if(userArr[i]>maxVal){
            maxVal=userArr[i];
        }
    }
    return maxVal;
}

template <typename dataType>
void mySearch(dataType userArr[], int arrSize, dataType toFind){
    int elementPosition=0;
    for(int i=0;i<arrSize;++i) {
        if(userArr[i]!=toFind){
            elementPosition+=1;
        }else{
            cout<<elementPosition;
        }
    }
    if(elementPosition==arrSize){
        cout<<"-1";
    }
}

