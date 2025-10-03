#include<iostream>
using namespace std;

int FindHappiness(int x, bool flag=false){
    if (x<10){
        if (x==1 && flag==true){
            cout<<"Its a Happy Number"<<endl;
        }
        else if (x!=1 && flag==true){
            cout<<"Its a Sad Number"<<endl;
        }
        return x;
    }
    else{
        int squarerec=(x%10)*(x%10)+FindHappiness(x/10)*(FindHappiness(x/10));
        if (x%10)
        cout<<squarerec<<endl;
        int val=FindHappiness(squarerec,true);
    }
}

int main(){
    FindHappiness(36);
}