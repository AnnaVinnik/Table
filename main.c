#include "hashtab.h"
#include <stdio.h>

int main(){
    char *key = "f";
   unsigned int k = hashtab_hash(key);
   printf("%d \n", k);

   struct table *hashtab[71];
   struct table *node;
   struct table *node1;
   hashtab_init(hashtab);
   //printf("%d \n", hashtab[5]);

   hashtab_add(hashtab, "Tigr", 220);
   hashtab_add(hashtab, "Slon", 340);

   node = hashtab_lookup(hashtab, "Tigr");
   printf ("Tigr, 220 %s, %d\n", node->key, node->value);

   node1 = hashtab_lookup(hashtab, "Slon");
   printf ("Slon %s, %d\n", node1->key, node1->value);

   hashtab_delete(hashtab, "Slon");
   node1 = hashtab_lookup(hashtab, "Slon");
   if (node1 != NULL)  printf ("Slon %s, %d\n", node1->key, node1->value);
   else printf(" not found \n");
return 0;   

}
