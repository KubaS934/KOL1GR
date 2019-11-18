#include<iostream>
#include "tstring.h"
using namespace std;

TString fun(const char* s)
{

    return TString(s);
}
auto main() -> int {

    TString s1;
    TString s2("dzien dobry");
    TString s3= fun("Obiekt w locie"); //move(s2);
    s1=fun("Drugi obiekt w locie");   //move(s3);
    for (auto c : s1) cout<< c << "-";
    for(size_t i=0; i<s1.size(); i++) cout<< s1[i] <<"=";
    cout<<endl;
    cout<<"_ _ _ _ _ _ _ _ _ _"<<endl;


}