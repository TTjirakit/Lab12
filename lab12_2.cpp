#include<iostream>
using namespace std;

long long int gcd(long long int x , long long y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

long long int gcd(long long int x , long long y){
    if(x % y == 0){
        return y;
    }else{
        y = gcd(y, x%y);
        return y;
    }
}