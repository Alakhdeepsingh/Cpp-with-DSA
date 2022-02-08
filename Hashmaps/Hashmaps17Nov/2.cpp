//rehashing
#include<bits/stdc++.h>
using namespace std;
template<typename V>
class mapnode{
    public:
        string key;
        V value;
        mapnode* next;

        mapnode(string key,V value){  //constructors 
            this->key = key;
            this->value = value;
            next= NULL;
        }
        ~mapnode(){
            delete next;
        }
};
class ourmap{
    mapnode<V>** bucket;
    int size;
    int numbucket;

    public:
    ourmap(){
        count=0;
        numbucket=5;
        bucket =new mapnode<V>*[numBuckets];
        for(int i=0; i<numbucket; i++){
            bucket[i]=NULL;
        }
    }
    ~ourmap(){
        for(int i=0; i<numbucket; i++){
            delete bucket[i];
        }
        delete[] bucket;
    }
    int size(){
        return count;
    }
    V getvalue(string key){
        int bucketindex=getbucketindex(string key);
        mapnode<V>* head=bucket[bucketindex];
        while(head!=NULL){
            if(head->value==key){
                return head->value;
            }
            head=head->next;
        }
        return 0;
    }
    private:
    int getbucketindex(string key){
        int hashcode=0;
        int currentcoeff=1;
        for(int i=key.size()-1; i>=0; i--){
            hashcode=hashcode+key[i]*currentcoeff;
            hashcode=hashcode%numbrackets;
            currentcoeff=*37;
            currentcoeff=currentcoeff%numbrackets;
        }
        return hashcode%numbrackets;
    }
    void rehash(){
        mapnode<V>** temp=buckets;
        buckets=new mapnode<V>*[2*numbrackets+1];
        for(int i=0; i<2*numbrackets i++){
            bracket[i]=NULL;
        }
        int oldBucketcount=numbuckets;
        numbuckets*=2;
        count=0;
        for(int i=0; i<oldnumbucket; i++){
            mapnode<V>*head =temp[i];\
            while(head!=NULL){
                string key=head->value;
                insert(key,valuelist(key));
                head=head->next;
            }
        }
        for(int i=0; i<oldnumbucket; i++){
            mapnode<V>* head=temp[i];
            delete head;
        }
        delete [] temp;
    }
    public:
    void insert(string key,V value){
        int bucketindex=getbucketindex(key);
        mapnode<V>*head=bucket[bucketindex];
        while(head!=NULL){
            if(head->key==key){
                head->value=value;
                return;
            }
            head=head->next;
        }
        head=bucket[bucketindex];
        mapnode<V>*node=new mapnode<V>(key,value);
        node->next=head;
        bucket[bucketindex]=node;
        count++;
        double loadfactor=(1.0*count)/numbuckets;
        if(loadfactor>0.7){
            rehash();
        }
    }
    V remove (string key){
        int bucketindex=getbucket(key);
        mapnode<V>*head = bucket[bucketindex];
        mapnode<V>*prev=NULL;
        while(head!=NULL){
            if(head->key==key){
                if(prev==NULL){
                    buckets[bucketindex]=head->next;
                }
                else{
                    prev->next=head->next;
                }
                V value=head->value;
                head->next=NULL;
                delete head;
                count--;
                return value;
            }
        prev=head;
        head=head->next;
        }
    }
}
int main()
{
    ourmap<int> map;
    for(int i=0; i<10; i++){
        c='0'+i;
        string key="abc";
        key=key+c;
        int value=i+1;
        map.insert(key,value);
    }
    cout<<map.size() <<endl;
    return 0;
}

