#include<bits/stdc++.h>
using namespace std;

class MyHashSet {
public:
vector<bool> hashmap;
    MyHashSet() {
        hashmap.resize(1000001,false);
        
    }
    
    void add(int key) {
        hashmap[key]=true;
    }
    
    void remove(int key) {
        hashmap[key]=false;
    }
    
    bool contains(int key) {
        return hashmap[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */