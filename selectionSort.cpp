void selectionSort(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        int smallest = i;
        
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[smallest] ) {
                smallest = j;
            }
        }
        
        if ( smallest != i ) {
            int temp = array[i];
            
            array[i] = array[smallest];
            array[smallest] = temp;
        }
    }
    
}
