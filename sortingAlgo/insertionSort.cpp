#include "../preProcessors.h"


void print( int *arr, int size );
void insertionSort( int *arr, int size );
void child( int *arr, int index );
void parent( int *arr, int size, int index );

int main()
{
    int size = 5;
    // cout << "Enter the size of the array:\n";
    // cin >> size;
    // int arr[size];
    int arr[] = { 5, 4, 3, 2, 1 };

    // cout << "Enter values in the array:\n";
    // for( int i = 0; i < size; i++ )
    // {
    //     cin >> arr[ i ];
    // }
    cout << "\nArray before Sorting:\n";
    print( arr, size );
    
    parent( arr, size - 1, 0 );
    cout << "\nArray After Sorting:\n";
    print( arr, size );
    // insertionSort( arr, size );

}

void child( int *arr, int index )
{
    if( index == 0 || arr[ index ] > arr[ index - 1 ] )
    {
        return;
    }
    else if( arr[ index ] < arr[ index - 1 ] )
    {
        int temp = arr[ index ];
        arr[ index ] = arr[ index - 1 ];
        arr[ index - 1 ] = temp;
    }
    child ( arr, --index );

}

void parent( int *arr, int size, int index )
{
    child( arr, index + 1 );
    if ( index == size - 1 )
    {
        return;
    }
    parent( arr, size, ++index );
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

