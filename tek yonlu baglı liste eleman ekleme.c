void list_push(GLL* list, GLLNode* element)
{   
    GLLNode* traverse = list->head; // bastaki elemani al
    if(traverse == NULL)
    {
        /* Eger hic eleman yoksa 
            argumani liste basi eleman yap
         */
        list->head = element; 
    }
    else
    {
        while(traverse->next!=NULL)
        {
            traverse = traverse->next; // listenin sonuna kadar git
        }
        traverse->next = element; // ekle
    }
}
