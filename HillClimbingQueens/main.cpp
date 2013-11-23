#include <iostream>

using namespace std;
int cost(int * Queenspostion);
int move(int *Queenspostion);
int main()
{
    cout << "Hello World!" << endl;
    return 0;
    int *Queenspostion;
    int Queens[8][2]={0,0,0,1,0,2,0,3,0,4,0,5,0,6,0,7};
    Queenspostion =Queens;
    if (cost(Queenspostion)==1){
        cout<<"solved"<<endl;

    }
    else{
        move(Queenspostion);
    }

}

int move(int *Queenspostion){

    int current;
    int nextpostion[8][2];
    current = cost(Queenspostion);
    for (int shift=0;shift<8;shift++){

    }

}
