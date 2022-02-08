int k;
cin>>k;
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
     cin>>a[i];
}
for(int i=0; i<n; i++){
     if(a[i]==k){
        cout<<k;
     }
}
return 0;