#include <iostream>
#include <string>
using namespace std;
//func to find the first occurrence of a substring using the naive algorithm
int naivePMatch(const string& text, const string& pattern) 
{
    if (pattern.empty()) 
        return 0; //empty pattern matches at index 0
    int n = text.size();
    int m = pattern.size();
    //slide pattern over text
    for (int i = 0; i <= n - m; i++) 
    {
        int j;
        for (j = 0; j < m; j++) 
        {
            if (text[i + j] != pattern[j]) 
                break; // mismatch
        }
        if (j == m) 
           return i; // match found
    }
    return -1; // not found
}
int main() {
    cout<<"Finding the first occurance of a substring"<<endl;
    //test case 1
    string t1 = "hello wazzup";//text1
    string p1 = "hello";//pattern1
    cout<<"\nPattern at beginning\n"
    <<"text: "<<t1<<"\tpattern: "<<p1<<endl;
    cout<<"Index: "<<naivePMatch(t1, p1)<<endl;

    //test case 2
    string t2 = "it's 10 pm at night";
    string p2 = "night";
    cout<<"\nPattern at end\n"
    <<"text: "<<t2<<"\tpattern: "<<p2<<endl;
    cout<<"Index: "<<naivePMatch(t2, p2)<<endl;

    //test case 3
    string t3 = "abcdef";
    string p3 = "gh";
    cout<<"\nPattern not present\n"<<
    "text: "<<t3<<"\tpattern: "<<p3<<endl;
    cout<<"Index: "<<naivePMatch(t3, p3)<<endl;

    //test case 4
    string t4 = "dsalab2";
    string p4 = "";
    cout<<"\nEmpty pattern\ntext: "<<t4<<"\tpattern: "<<p4<<endl;
    cout<<"Index: "<<naivePMatch(t4, p4)<<endl;

    return 0;
}
