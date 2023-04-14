#include <iostream>
using std::cout;
using std::cin;
using std::string;


int main()
{
    int num = 10;
    int arr[num];
    int value;
    int start = 0, end = num - 1;
    int mid;

    cout << "Enter any Number To Find in the Array:\n";
    cin >> value;
    for( int i = 0; i < num; i++ )
    {
        arr[i] = i + 1;
    }
    int count = 0;
    while( start <= end )
    {
        count++;
        mid = (start + end) / 2;
        if( arr[mid] == value )
        {
            cout << value << " is at Index " << mid << "\n";
            break;
        }
        else if( arr[mid] > value )
        {
            end = mid - 1;
        }
        else if( arr[mid] < value )
        {
            start = mid + 1;
        }
    }
    cout << "TIME COMPLEXITY IS " << count << "\n";
}

