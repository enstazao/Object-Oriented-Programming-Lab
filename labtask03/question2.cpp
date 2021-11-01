#include <iostream>
#include <string>

using namespace std;

// Product Class
class Product{
    private:
        float regularPrice;
        float discount;
    public:
        float GetPrice();
        void SetPrice(float);
        void SetDiscount(float);
        float GetDiscount();
        float DisplayBill(float regularPrice, float discount);
};

void Product::SetPrice(float regularPrice){
    if (regularPrice > 0)
        this->regularPrice = regularPrice;
    else
        this->regularPrice = 0;
}

void Product::SetDiscount(float discount){
        this->discount = discount;
}

float Product::GetDiscount(){
    return discount;
}

float Product::GetPrice(){
    return regularPrice;
}

float Product::DisplayBill(float regularPrice, float discount){
    return regularPrice * discount;
}
// End of Product Class

//  Book Child Class

class Book : public Product{
    private:
        string authorName;
        string bookName;
    public:
        void Set_Author_Book_Name(string, string);
        string Get_Author_Name();
        string Get_Book_Name();
};

void Book::Set_Author_Book_Name(string authorName, string bookName){
    this->authorName = authorName;
    this->bookName = bookName;
}

string Book::Get_Author_Name(){
    return authorName;
}

string Book::Get_Book_Name(){
    return bookName;
}

// End of Book Child

// Electronics Class
class Electronics : public Product{
    private:
        string manufacturerName;
    public:
        void Set_ManuFacturer_Name(string);
        string Get_ManuFacturer_Name();
};

void Electronics::Set_ManuFacturer_Name(string manufacturerName){
    this->manufacturerName = manufacturerName;
}

string Electronics::Get_ManuFacturer_Name(){
    return manufacturerName;
}

class MP3Player : public Electronics{
    private:
        string color;
        float capacity;
    public:
        void Set_Color_Capacity(string , float);
        string GetColor();
        float GetCapacity();
};

void MP3Player::Set_Color_Capacity(string color, float capacity){
    this->color    = color;
    this->capacity = capacity;
}

string MP3Player::GetColor(){
    return color;
}

float MP3Player::GetCapacity(){
    return capacity;
}

// TV Class
class TV : public Electronics{
    private:
        int televisionSize;
    public:
        void Set_Television_Size(int);
        int Get_Television_Size();
};

void TV::Set_Television_Size(int televisionSize){
    this->televisionSize = televisionSize;
}

int TV::Get_Television_Size(){
    return televisionSize;
}


int main(){
    cout << "\n==============================  WELCOME THE BOOK SHOP  ======================================\n\n\n";
    // Book Child 
    float regularPrice = 0.0;
    float discount = 0.0;
    Book b;
    b.Set_Author_Book_Name("DSMALIK", "CPP");
    cout << "       The Book Author Name is          :  " << b.Get_Author_Name() << endl;
    cout << "       The Book Name is                 :  " << b.Get_Book_Name() << endl;
    b.SetPrice(505.5);              // Setting Price to 505.5
    regularPrice = b.GetPrice();
    b.SetDiscount(0.50);
    discount = b.GetDiscount();
    cout << "       The Actual Amount of the Book is : " << " " << regularPrice << " " 
    << "\n       After Discount the Amount is     : " << " " << b.DisplayBill(regularPrice, discount) << endl;
    // End of Book Child
    cout << "\n=============================  THANKS FOR COMING TO BOOK SHOP  ======================================\n\n\n";
    // Start of Electronics Class
    cout << "\n============================   WELCOME THE ELECTRONICS SHOP  ======================================\n\n\n";
    cout << "\n============================         MP3 Class          ======================================\n\n\n";
    regularPrice = 0.0;
    discount = 0.0;
    MP3Player mp3;
    mp3.Set_ManuFacturer_Name("Jawad");
    cout << "        This MP3 Manufacturer Name is       : " << mp3.Get_ManuFacturer_Name() << endl;
    mp3.Set_Color_Capacity("Red", 5.5);
    cout << "        The MP3 has a Color                 : " << mp3.GetColor()           << endl;
    cout << "        The Capacity of the MP3 is          : " << mp3.GetCapacity() << endl;
    mp3.SetPrice(555.5);
    regularPrice = mp3.GetPrice();
    mp3.SetDiscount(0.50);
    discount = mp3.GetDiscount();

    cout << "        The Price of this MP3 is            : " <<  regularPrice  << "\n        After Discount Price of the MP3 is  : "
    << mp3.DisplayBill(regularPrice, discount) << endl;
    cout << "\n=============================  THANKS FOR COMING TO MP3 SHOP   ======================================\n\n\n";

    cout << "\n=============================  THANKS FOR COMING TO TV SHOP  ======================================\n\n\n";
    regularPrice = 0.0;
    discount = 0.0;
    TV t;
    t.Set_ManuFacturer_Name("Rustam");
    cout << "        The ManuFacturer of this TV is  : " << t.Get_ManuFacturer_Name() << endl;
    t.Set_Television_Size(7);
    cout << "        The Television is Size is       : " << t.Get_Television_Size()  << "inch" << endl;
    t.SetPrice(25000.0);
    regularPrice = t.GetPrice();
    t.SetDiscount(0.60);
    discount = t.GetDiscount();
    cout << "        The Orignal Price of this TV is : " << regularPrice << "\n        After Discount the Price is     : "
    << t.DisplayBill(regularPrice, discount) << endl << endl; 
    return 0;
}



