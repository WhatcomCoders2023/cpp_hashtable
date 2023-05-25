#define CAPACITY 50000 // Size of HashTable

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

unsigned long hash_function(char *str)
{
    unsigned long i = 0;
    for (int j = 0; str[j]; j++)
    {
        i += str[j];
    }
    return i % CAPACITY;
}