
#include <iostream>
using namespace std;

const int SIZE = 8;

template <class T>
class MyTmp {
public:
    T * arr = new T[SIZE];
    MyTmp()
    {

        for (int i = 0; i < SIZE; i++) 
        {
            arr[i] = rand() % 10;
            //arr[i] =8;
        }
    }
    template <class t> 
    friend bool operator == (MyTmp<T>& var1, MyTmp<T>& var2);
    T& operator[](int i);
};

template <class T>
bool operator == (MyTmp<T>& var1, MyTmp<T>& var2)
{
   
  
    for (int i = 0; i < SIZE; i++)
    {
        return(var1.arr[i] == var2.arr[i]);
        
    }
    

}

template <class T>
ostream& operator<<(ostream& os, MyTmp<T>& obj)
{
    for (int i = 0; i < SIZE; i++)
    {   
      
        os << obj.arr[i] << " ";
        os << endl;
        return os;
    }


}
template <typename T>
T& MyTmp<T>::operator[](int i)
{

    return arr[i];
}

int main()
{
    

    MyTmp<int> obj1, obj2;

    

    cout << "Mass 1: \n \t[";
 
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << obj1.arr[i] << ", ";
    }
    
    
    cout << "]\nMass 2: \n \t[";

    for (int i = 0; i < SIZE; i++)
    {
        cout << obj2.arr[i] << ", ";
    }
    cout << "]\n";
    
    if (obj1 == obj2)
        cout << "\nArrays are equal" << endl;
    else
        cout << "\nArrays are NOT equal" << endl;

    return 0;
}
