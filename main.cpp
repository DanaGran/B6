#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <algorithm>

int main(){
    std::string nume;
    std::cin>>nume;
    std::ifstream myfile;
    myfile.open( nume );

    std::vector<int>numere1;
    int n ,a ,b;
    myfile>>n;
    for( int i = 0 ;i < n ;i++)
    {
        myfile>>a;
        numere1.push_back( a );
    }
    int ok=0;
    std::sort(numere1.begin(), numere1.end());
    while( myfile>>b){


        if (std::binary_search(numere1.begin(), numere1.end(), b))
        ok++;


    }
    std::cout<<ok;

    return 0;
}