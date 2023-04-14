#include "../preProcessors.h"


void print( int *arr, int size );
void insertionSort( int *arr, int size );

int main()
{
    int size;
    cout << "Enter the size of the array:\n";
    cin >> size;
    int arr[size];

    cout << "Enter values in the array:\n";
    for( int i = 0; i < size; i++ )
    {
        cin >> arr[ i ];
    }
    cout << "\nArray before Sorting:\n";
    print( arr, size );
    insertionSort( arr, size );

}

void insertionSort( int *arr, int size )
{
    for ( int i = 0; i < size - 1; i++ )
    {
        for( int j = i + 1; j > 0; j-- )
        {
            if( arr[ j ] < arr[ j - 1 ] )
            {
                int temp = arr[ j ];
                arr[ j ] = arr[ j - 1 ];
                arr[ j - 1 ] = temp;
            }
            else
            {
                break;
            }
        }
    }
    cout << "\nArray After Sorting:\n";
    print( arr, size );
}

void print( int *arr, int size )
{
    cout << "{ ";
    for( int i = 0; i < size; i++ )
    {
        cout << arr[ i ] << ", ";
    }
    cout << "\b\b }\n";
}

