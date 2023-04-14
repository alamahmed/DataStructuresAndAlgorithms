#include "../preProcessors.h"


void print( int *arr, int size );
void selectionSort( int *arr, int size );

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
    selectionSort( arr, size );

}

void selectionSort( int *arr, int size )
{
    for ( int i = 0; i < size - 1; i++ )
    {
        int min = i;
        for( int j = i; j < size; j++ )
        {
            if ( arr[ j ] < arr[ min ])
            {
                min = j;
            }
        }
        int temp = arr[ i ];
        arr[ i ] = arr[ min ];
        arr[ min ] = temp;
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

