 int size;
cin >> size;
char n[size];
cin >> n;
for( int i=(size-1); i>=0; i--) {

    doosra[ size - i - 1 ] = n[i];   

}

// 2
bool isEqual = true;
for( int i=0; i<size; i++ ) {
    if( n[i] != doosra[i] ) {
        isEqual = false;
    }
}

if(isEqual == false) {
    cout << "false" ;
} else {
    cout << "true" ;
}