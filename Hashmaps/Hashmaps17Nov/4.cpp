//Pair with difference K
#include<bits/stdc++.h>
using namespace std;
int pairs(vector<int>&v , int n,int k){
    unordered_map<int,int>mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]=1;
    }
    int ans=0;
    for(int i = 0; i < n; i++){ //n=9
        int x=v[i];  //2
        int y=v[i]-k; //-1
        int z=v[i]+k;
        if(mp[y]==1){
            ans++;
        }
        if(mp[z]==1){
            ans++;
        }
        mp[v[i]]=0;
    }
    return ans;
}
int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int d=pairs(v,n,k);
    cout<<d<<endl;
    return 0;
}
// 9
// 3
// 2 -1 3 5 6 0 -1 2 6
// 4















































// def longestConsecutiveIncreasingSequence(l):
// #Implement Your Code Here
// #You have To Return the list of longestConsecutiveSubsequence

//     d={}
//     for i in range(len(l)):
//     	d[l[i]]=True

//     maxLength=float("-inf")
//     start=0

//     for i in range(len(l)):

//         if d[l[i]]==False:
//         	continue
//         x=l[i]
//         flag=True
//         countF=0
//         while flag:
//             if x in d:
//                 count+=1
//                 x+=1
// 				d[x]=False
//             else:
//                 break
//             	flag=False

//         countB=0
//         x=l[i]
//         flag=True
//         while flag:
//             if x in d:
//                 count+=1
//                 x-=1
//                 d[x]=False
//             else:
//                 break
//             	flag=False


//         if countB+countF>maxLength:
//             maxLength=countB+countF
//             start=l[i]

//     output=[]
//     for i in range(start,start+maxLength):
//     	output.append(i)

//     return output



// n=int(input())
// l=list(int(i) for i in input().strip().split(' '))
// final = longestConsecutiveSubsequence(l)
// for num in final:
//     print(num)
