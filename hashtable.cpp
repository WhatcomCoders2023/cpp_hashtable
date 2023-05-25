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

unsigned long hash_function(char *str)
{
    unsigned long i = 0;
    for (int j = 0; str[j]; j++)
    {
        i += str[j];
    }
    return i % CAPACITY;
}

/**
 * @brief Create a new HashTable_Ttem structure with the given key and value.
 *
 * @param key The key associated with the item.
 * @param value The value associated with the item.
 * @return A pointer to the newly created HashTable_Item object.
 */
HashTable_Item *create_item(char *key, char *value)
{
    HashTable_Item *item = (HashTable_Item *)malloc(sizeof(HashTable_Item));
    item->key = (char *)malloc(strlen(key) + 1);
    item->value = (char *)malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}

/**
 * @brief Create a table object with the given size.
 *
 * @param size The size of the hashtable.
 * @return A pointer to the newly created HashTable object.
 */
HashTable *create_table(int size)
{
    HashTable *table = (HashTable *)malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (HashTable_Item **)calloc(table->size, sizeof(HashTable_Item *));

    for (int i = 0; i < table->size; i++)
    {
        table->items[i] = NULL;
    }
    return table;
}

int main()
{
    return 0;
}