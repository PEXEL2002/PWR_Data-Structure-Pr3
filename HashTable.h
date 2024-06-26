#pragma once
template <typename K, typename V>
class HashTable{
public:
    virtual void insert(K key, V value) = 0;
    virtual void remove(K key) = 0;
    virtual V find(K key) = 0;
    virtual bool exists(K key) = 0;
    virtual int size() = 0;
    virtual bool empty() = 0;
    virtual void keys() = 0;
    virtual void values() = 0;
    virtual void print() = 0;
};
