/*
A hash table can be implemented with the following. Because of this example's simplicity, it comes with some restrictions on use and capabilities: it can't be resized automatically, if you try to insert more values than its capacity it will freeze, the hashing function is very simple, etc. All are fixable with additional logic or using a library. 
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int size;
	void **keys;
	void **values;
} hash_t;

hash_t *hash_new (int size) {
	hash_t *h = calloc(1, sizeof (hash_t));
	h->keys = calloc(size, sizeof (void *));
	h->values = calloc(size, sizeof (void *));
	h->size = size;
	return h;
}

int hash_index (hash_t *h, void *key) {
	int i = (int) key & h->size;
	while (h->keys[i] && h->keys[i] != key)
		i = (i + 1) % h->size;
	return i;
}

void hash_insert (hash_t *h, void *key, void *value) {
	int i = hash_index(h, key);
	h->keys[i] = key;
	h->values[i] = value;
}

void *hash_lookup (hash_t *h, void *key) {
	int i = hash_index(h, key);
	return h->values[i];
}

int main()
{
	hash_t *h = hash_new(15);
	hash_insert(h, "hello", "world");
	hash_insert(h, "a", "b");
	printf("hello => %s\n", hash_lookup(h, "hello"));
	printf("herp => %s\n", hash_lookup(h, "herp"));
	printf("a => %s\n", hash_lookup(h, "a"));
	return 0;
}