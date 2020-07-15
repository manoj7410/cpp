#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hi"};
    msg.push_back("Hello There !!");
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}