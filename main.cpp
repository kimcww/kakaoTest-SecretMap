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

int *Calculate(int *Arr1 , int *Arr2){

    static int Calculate[] = {0,};
    for(int i = 0 ; i < nCount ; i++){
        Calculate[i] = (Arr1[i] | Arr2[i]);

    }
    return Calculate;
}

void Result(int *arr){
    char Calculate[nCount];
    for(int i= 0; i < nCount ; i++){
        if( arr[i] == 1){
            Calculate[i] = '#';
        } else {
            Calculate[i] = ' ';
        }
        std::cout<<Calculate[i];
    }
    std::cout<<"\n";
    return;
}
int main()
{
    std::cin>>nCount;
    int nArr1[nCount];
    int nArr2[nCount];
    for(int i = 0; i<nCount ; i++){
        std::cin>>nArr1[i];
    }
    for(int i = 0; i<nCount ; i++){
        std::cin>>nArr2[i];
    }
    for( int i = 0; i<nCount; i++){
        Result( binary(Calculate(nArr1 , nArr2)[i]));
    }
    return -1;
}
