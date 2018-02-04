int partition(int array[], int p, int r) {
    int q = p;
    int temp;
    
    for ( int u = p; u < r; u++ ) {
        if ( array[u] <= array[r] ) {
            temp = array[q];
            array[q] = array[u];
            array[u] = temp;
            q += 1;
        }
    }
    
    temp = array[q];
    array[q] = array[r];
    array[r] = temp;
    
    return q;
}

void quickSort(int array[], int p, int r) {
    int q;
    
    if ( p >= r ) {
        return;
    }
    
    q = partition(array, p, r);
    quickSort(array, p, q-1);
    quickSort(array, q+1, r);
}
