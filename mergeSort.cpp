void merge(int array[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int tmp1[n1+1];
    int tmp2[n2+1];
    
    for ( int i = p, j = 0; i <= q; i++ ) {
        tmp1[j] = array[i];
        j += 1;
    }
    
    for ( int i = q + 1, j = 0; i <=r; i++ ) {
        tmp2[j] = array[i];
        j += 1;
    }
    
    tmp1[n1] = 99999999;
    tmp2[n2] = 99999999;
    
    for ( int i = 0, j = 0, k = p; k <= r; k++ ) {
        if ( tmp1[i] <= tmp2[j] ) {
            array[k] = tmp1[i];
            i += 1;
        } else {
            array[k] = tmp2[j];
            j += 1;
        }
    }
}

void mergeSort(int array[], int p, int r) {
    int q;
    
    if ( p >= r ) {
        return;
    }
    
    q = (p + r) / 2;
    mergeSort(array, p, q);
    mergeSort(array, q + 1, r);
    merge(array, p, q, r);
}
