#include <iostream>
#include <cmath>

using namespace std;

class DoubleArray
{
public:
    DoubleArray(); // FÊribreytulaus smiður
    DoubleArray(int initSize, double initVal); // Smiður með færibreytum
    DoubleArray(const DoubleArray &copyMe); // Afritunarsmiður
    ~DoubleArray(); // Destructor
    
    void operator =(const DoubleArray &sameAsMe); // Gildisveiting
    
    double avg() const;
    double std() const;
    
    friend DoubleArray operator+(const DoubleArray &lhs,const DoubleArray &rhs);
    friend bool operator>(const DoubleArray &lhs,const DoubleArray &rhs);
    
    friend ostream& operator<<(ostream &out, const DoubleArray &da);
    friend istream& operator>>(istream &in, DoubleArray &da);
    
    
private:
    double *arr;
    int size;
};

int main ()
{
    DoubleArray DA1 , DA2 (5 , 3.7) ;
    
    cin >> DA1 ;
    cout << " DA1 : " << DA1 << endl ;
    cout << " DA2 : " << DA2 << endl ;
    
    cin >> DA2 ;
    cout << " DA2 : " << DA2 << endl ;
    cout << " DA1 + DA2 = " << DA1 + DA2 << endl ;
    
    if ( DA1 > DA2 )
    {
        cout << " DA1 has the highest average ! " << endl ;
    }
    else
    {
         cout << " DA2 has the highest average ! " << endl ;
    }
    
    DoubleArray DA3 ( DA1 );
    cout << " DA3: " << DA3 << endl;
    
    DoubleArray DA4;
    cout << " DA4: " << DA4 << endl;
    
    DA4 = DA2;
    cout << " DA4: " << DA4 << endl;
    
    return 0;
}

// Færibreytulaus smiður
// þessi smiður á að núllstilla meðlimabreyturnar
DoubleArray::DoubleArray()
{
    size = 0;
    arr = NULL;
}

// Smiður með færibreytum
// þessi smiður á að upphafsstilla stærðina sem initSize,
// og frumstilla öll stökin í fylkinu með gildið initVal
DoubleArray::DoubleArray(int initSize, double initVal)
{
    size = initSize;
    arr = new double[size];
    
    for(int i = 0; i < size; i++)
    {
        arr[i] = initVal;
    }
}

// Afritunarsmiður
// þessi smiður býr til nákvæmlega eins eintak og copyMe er,
// þ.e nýja DoubleArray-ið á að hafa sömu stærð  og copyMe og fylkið arr
// á að hafa sömu stök og er í fylkinu arr sem copyMe á
DoubleArray::DoubleArray(const DoubleArray &copyMe)
{
    // Strillum stærðina
    size = copyMe.size;
    // Ef stærðin er 0, þá eru engin stök í fylkinu, svo við upphafsstillum það sem NULL
    if( size == 0)
    {
        arr = NULL;
    }
    else // Ef stærðin er ekki 0 þá þurfum við að taka frá minni
    {
        arr = new double[size];
        // Afritum öll stökin úr fylkinu sem copyMe á og setjum í fylkið fyrir
        // nýja DoubleArray-ið
        for(int i = 0; i < size; i++)
        {
            arr[i] = copyMe.arr[i];
        }
    }
}

// Destructor - sér um að skila minninu sem búið er að taka frá
DoubleArray::~DoubleArray()
{
    // Ef að fylkið er ekki tómt, þá viljum við eyða því
    // Getum ekki eytt minni sem er NULL
    if(arr != NULL)
    {
        delete [] arr;
    }
}

// Gildisveiting
void DoubleArray::operator =(const DoubleArray &sameAsMe)
{
    // Þurfum að skoða 3 tilfelli
    // 1. Ef sameAsMe á tómt fylki
    // 2. Ef sameAsMe á ekki tómt fylki
    if(sameAsMe.arr == NULL)
    {
        // Ef að fylkið "okkar" er ekki tómt þá þurfum við að skila minninu
        if(arr != NULL)
        {
            delete[]arr;
        }
        arr = NULL;
        size = 0;
    }
    else
    {
        // Ef stærðirnar eru eins, þá getum við notað gamla minnið.
        if(size != sameAsMe.size)
        {
            // Stillum stærðina "okkar" eins og hjá sameAsME
            size = sameAsMe.size;
        
            // Ef fylkið okkar er ekki tómt þá viljum við eyða því
            if(arr != NULL)
            {
                delete [] arr;
            }
            // Búum til nýtt fylki sem er jafnt stórt og fylkið sem sameAsMe á
            arr = new double[size];
        }
        
        // Afritum öll stökin úr fylkinu sem sameAsMe á og setjum í fylkið fyrir
        // nýja fylkinu "okkar"
        for(int i = 0; i < size; i++)
        {
            arr[i] = sameAsMe.arr[i];
        }
        
    }
    
}

// Fall sem reiknar meðaltal. Þetta fall er látið vera const þar sem
// það er ekki að breyta neinum gildum í klasabreytunum, heldur er það
// bara að nota breyturnar.
// Það þarf að hafa avg() const útaf þetta fall er notað í bool operator >
double DoubleArray::avg() const
{
    double sum = 0.0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    double average = sum / size;
    return average;
}

// Fall sem reiknar staðalfrávik. Þetta fall er látið vera const þar sem
// það er ekki að breyta neinum gildum í klasabreytunum, heldur er það
// bara að nota breyturnar.
// Það þarf þannig séð ekki að hafa þetta fall sem const, útaf við eurm
// ekki að nota það inní öðru falli, en eðlilegast er að hafa þetta const.
double DoubleArray::std() const
{
    double sum = 0.0;
    double average = avg();
    for(int i = 0; i < size; i++)
    {
        sum = sum + (arr[i] - average)*(arr[i] - average);
    }
    double standartd = sqrt(sum/(size-1));
    return standartd;
}

// operator +.
// Skilar nýju DoubleArray sem hefur fylki sem inniheldur öll stökin
// í fylkinu sem lhs á  og öll stökin í fylkinu sem rhs á.
// Ef lhs: size = 3, arr = [1   2   3]
// Ef rhs: size = 2, arr = [4   5]
// Þá veðrur lhs + rhs: size = 5, arr = [1  2  3  4  5]
DoubleArray operator+(const DoubleArray &lhs, const DoubleArray &rhs)
{
    // Upphafsstillum stærðina á nýja DoubleArrayinu
    int new_size = lhs.size + rhs.size;
    
    // Notum færibreytusmiðinn til að taka frá minni.
    // Færibreytusmiðurinn mun láta fylkið arr sem new_arr á vera að stærðinni
    // new_size og upphafsstilla hverst stak sem 0.0
    DoubleArray new_arr(new_size,0.0);
    
    // Afritum stökin yfir í fylkið sem nýja DoubleArrayið á.
    // Fyrst viljum við afrita öll stökin sem eru í lhs
    for(int i = 0; i < lhs.size; i++)
    {
        new_arr.arr[i] = lhs.arr[i];
    }
    // Þegar við eurm komin hingað þá lítur fylkið sem nýja DoubleArray-ið
    // á svona út(miðað við dæmið sem var fyrir ofan fallið)
    // arr = [1  2  3  0.0  0.0]
    
    // Afritum stökin úr fylkinu sem rhs á. Forlykkjan fyrir ofan stoppaði þegar
    // i = lhs.size, svo við látum þessa forlykkju byrja í lhs.size og enda í stærðinni
    // á nýja fylkinu
    for(int i = lhs.size; i < new_size; i++)
    {
        new_arr.arr[i] = rhs.arr[i-lhs.size];
    }
    
    // Skilum nýja DoubleArrayinu okkar
    return new_arr;
}


// Önnur leið til að útfæra + operatorinn. Þessi leið er alveg jafn rétt og
// leiðin fyrir ofan.
/*
 DoubleArray operator+(const DoubleArray &lhs, const DoubleArray &rhs)
 {
 // Upphafsstillum stærðina á nýja DoubleArrayinu
 int new_size = lhs.size + rhs.size;
 
 // Notum færibreytusmiðinn til að taka frá minni.
 // Færibreytusmiðurinn mun láta fylkið arr sem new_arr á vera að stærðinni
 // new_size og upphafsstilla hverst stak sem 0.0
 DoubleArray new_arr(new_size,0.0);
 
 for(int i = 0; i < new_size; i++)
 {
 if(i < lhs.size)
 {
 new_arr.arr[i] = lhs.arr[i];
 }
 else
 {
 new_arr.arr[i] = rhs.arr[i-lhs.size];
 }
 }
 
 return new_arr;
 }*/

// bool operator > á að skila true ef meðaltalið hjá lhs er
// stærra en meðaltalið hjá rhs
// Þessi operator tekur inn const DoubleArray, og við notum avg
// fallið til að útfæra hann. Þess vega þarf avg() fallið að vera const líka
bool operator>(const DoubleArray &lhs, const DoubleArray &rhs)
{
    if(lhs.avg() > rhs.avg())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Ostream& operator <<, "prentar út" hvert stak í fylkinu
// sem DoubleArrayið da á, þar sem það er bil á milli allra staka.
// ATH: þetta er ekki einsog lýst var í verkefnalýsingunni.
ostream& operator<<(ostream &out, const DoubleArray &da)
{
    for(int i = 0; i < da.size ; i++)
    {
        out << da.arr[i] << " ";
    }
    return out;
}

// istream& operator >>, les fyrst inn stærðina á fylkinu og svo
// inn öll stökin sem eiga að vera í því.
istream& operator>>(istream &in, DoubleArray &da)
{
    // Fáum stærðina á fylkinu og geymum í breytunni n
    int n;
    in >> n;
    
    // Þurfum að skoða 2 tilfelli.
    //  1. Ef DoubleArrayið da á tómt fylki þá þurfum við að taka frá minni fyrir fylkið
    //  2. Ef DoubleArrayið da á fylki sem er ekki tómt en það er heldur ekki að stærðinni n.
    //     Þá þarf að eyða gamla fylkinu og búa til nýtt fylki sem er að stærðinni n
    if(da.arr == NULL)
    {
        da.arr = new double[n];
        da.size = n;
    }
    else if(da.size != n)
    {
        delete [] da.arr;
        da.arr = new double[n];
        da.size = n;
    }
    
    // Lesum inn öll stökin í fylkið.
    for(int i = 0; i < n; i++)
    {
        in >> da.arr[i];
    }
    return in;
}
