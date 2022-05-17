int list_len(GLL* list)
{
    int no = 0; // Sifir ile baslat
    GLLNode* traverse = list->head; // liste basi
    if(traverse == NULL)
    {
        return no; // hic eleman yoksa 0 dondur
    }
    else
    {   
        while(traverse->next!=NULL)
        {
            traverse = traverse->next; // liste sonuna kadar git
            no++; // sayiyi arttir
        }
        return no+1; // sayi + ilk eleman
    }
}
