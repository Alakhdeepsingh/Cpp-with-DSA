//hashmaps implementation insert,delete and search
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
//
    int size(){
        return count;
    }
    //
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
        for(int i=key.length()-1; i>=0; i--){
            hashcode=hashcode+key[i]*currentcoeff;
            hashcode=hashcode%numbrackets; 
            currentcoeff=*37;
            currentcoeff=currentcoeff%numbrackets;
        }
        return hashcode%numbrackets;
    }
    //
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

    return 0;
}

