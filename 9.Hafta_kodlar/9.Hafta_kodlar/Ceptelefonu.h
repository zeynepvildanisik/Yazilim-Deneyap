class Ceptelefonu
{
public:
    char marka[30];
    char model[30];
    int fiyat;
    bool aramaDurum;
    Ceptelefonu(int x_fiyat){
        fiyat = x_fiyat;
    }
void arama();
};
void Ceptelefonu::arama()
{
    aramaDurum = true;
}
