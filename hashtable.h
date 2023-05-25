#ifndef HASHTABLE_H
#define HASHTABLE_H

#define CAPACITY 50000 // Size of HashTable

#include <cstdlib>
#include <cstring>

typedef struct HashTable_Item
{
    char *key;
    char *value;
} HashTable_Item;

typedef struct HashTable
{
    HashTable_Item **items;
    int size;
    int count;
} HashTable;

HashTable_Item *create_item(char *key, char *value);
void free_item(HashTable_Item *item);

HashTable *create_table(int size);
void free_table(HashTable *table);

#endif // HASHTABLE_H