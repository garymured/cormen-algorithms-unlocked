void countingSort(int array[], int size, int range) {
    int equal[range];
    int less[range];
    int arraySorted[size];
    int next[range];
    
    // countKeysEqual()
    for (int i = 0; i < range; i++ ) {
        equal[i] = 0;
    }
    
    for ( int i = 0; i < size; i++ ) {
        int key = array[i];
        
        equal[key] += 1;
    }
    
    // countKeysLess()
    less[0] = 0;
    
    for ( int i = 1; i < range; i++ ) {
        less[i] = less[i-1] + equal[i-1];
    }
    
    // rearrange()
    for ( int i = 0; i < range; i++ ) {
        next[i] = less[i];
    }
    
    for ( int i = 0; i < size; i++ ) {
        int key = array[i];
        int index = next[key];
        
        arraySorted[index] = array[i];
        next[key] += 1;
    }
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = arraySorted[i];
    }
}
