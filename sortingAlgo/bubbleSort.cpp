#include "../preProcessors.h"


void print( int *arr, int size );
void bubbleSort( int *arr, int size );
void childLoop( int *arr, int size, int index );
void parentLoop( int *arr, int size, int index );

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
    
    parentLoop( arr, size - 1, 0 );
    cout << "\nArray After Sorting:\n";
    print( arr, size );
    // bubbleSort( arr, size );

}


void childLoop( int *arr, int size, int index )
{
    if ( arr[ index ] > arr[ index + 1 ])
    {
        int temp = arr[ index ];
        arr[ index ] = arr[ index + 1 ];
        arr[ index + 1 ] = temp;
    }
    if ( index == size - 1 )
    {
        return;
    }
    childLoop( arr, size, index + 1 );
}

void parentLoop( int *arr, int size, int index )
{
    childLoop( arr, size - index, 0 );
    if( index == size - 1 )
    {
        return;
    }
    parentLoop( arr, size, index + 1 );
}


void bubbleSort( int *arr, int size )
{
    for ( int i = 0; i < size - 1; i++ )
    {
        bool flag = true;
        for( int j = 0; j < size - 1 - i; j++ )
        {
            if( arr[ j ] > arr[ j + 1 ] )
            {
                int temp = arr[ j ];
                arr[ j ] = arr[ j + 1 ];
                arr[ j + 1 ] = temp;
                flag = false;
            }
        }
        if( flag )
        {
            break;
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

