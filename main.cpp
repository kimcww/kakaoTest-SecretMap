#include<iostream>

int nCount = 0;

int *binary(int input){

    static int Output[] = {0,};

    for(int i = nCount; i >0 ; i--){
        Output[i-1] = input % 2;
        input = input/2;
    }

    return Output;
}
int main()
{
    std::cin>>nCount;
    int nArr1[nCount];
    int nArr2[nCount];
    for(int i = 0; i<nCount ; i++){
        std::cin>>nArr1[nCount];
    }

    for(int i = 0; i<nCount ; i++){
        std::cin>>nArr2[nCount];
    }


    return -1;
}
