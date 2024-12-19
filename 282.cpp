#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; //take count of number of inputs
    cin>>n;
    int x=0; //initialize the op to zero for starters
    for(int i=0;i<n;++i){  //a loop which takes in the inputs -> X++, X--,++X,--X
        string statement; 
        cin>>statement; 
        if(statement=="++X" || statement=="X++"){ //Check for both cases and conditions
            x++;
        }
        else if(statement=="--X" || statement=="X--"){
            x--;
        }
    } 
    cout<<x;  //return output
    }
    
