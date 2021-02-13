#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, i , j;
    cin>>n;
    int numbers[n];
    for(i=2; i<=n ;i++){
        numbers[i] = i;
    }
    ///(Eratosthenes) version
    for(i=2; i <= floor(sqrt(n)) ; i++){
        for(j=i; j <= floor(n/i) ; j++ ){
            numbers[i*j] = 0;
        }
    }
    for(i=2 ; i < n ; i++){
        if(numbers[i] == 0)
            continue;
        cout<<numbers[i]<< "  ";
    }

    return 0;
}
