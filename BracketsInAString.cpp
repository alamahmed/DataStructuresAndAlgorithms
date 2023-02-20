#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main()
{
    string Question = "{([)]}";
    for(int i = 0; i < Question.length(); i++)
    {
        cout << Question[i] << "\n";
        
    }
}


