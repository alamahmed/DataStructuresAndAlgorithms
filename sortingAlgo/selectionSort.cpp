#include "../preProcessors.h"


void print( int *arr, int size );
void selectionSort( int *arr, int size );
void child( int *arr, int size, int indexJ, int &min );
void parent( int *arr, int size, int indexI );
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

    parent( arr, size, 0 );
    cout << "\nArray After Sorting:\n";
    print( arr, size );

    // selectionSort( arr, size );

}

void child( int *arr, int size, int indexJ, int &min )
{
    if( indexJ == size )
    {
        return;
    }
    else if( arr[ indexJ ] < arr[ min ] )
    {
        min = indexJ;
    }
    child( arr, size, indexJ + 1, min );

}

void parent( int *arr, int size, int indexI )
{
    if( indexI == size )
    {
        return;
    }
    int min = indexI;
    
    child( arr, size, indexI + 1, min );
    
    int temp = arr[ indexI ];
    arr[ indexI ] = arr[ min ];
    arr[ min ] = temp;
    
    parent( arr, size, indexI + 1 );
}


void selectionSort( int *arr, int size )
{
    for ( int i = 0; i < size - 1; i++ )
    {
        int min = i;
        for( int j = i + 1; j < size; j++ )
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

