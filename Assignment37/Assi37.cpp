#include <iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int size;

public:
    Array(int value = 10)
    {
        cout << "Inside Constructor\n";
        this->size = value;
        this->Arr = new int[size];
    }

    Array(Array &ref)
    {
        cout << "Inside copy constructor\n";
        this->size = ref.size;
        this->Arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }

    ~Array()
    {
        cout << "Inside Destructor\n";
        delete[] Arr;
    }

    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout << "Please enter the values\n";
    for (int i = 0; i < this->size; i++)
    {
        cin >> Arr[i];
    }
}

void Array::Display()
{
    cout << "Elements are\n";
    for (int i = 0; i < this->size; i++)
    {
        cout << Arr[i] << "\t";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
public:
    ArrSearch(int no = 10) : Array(no) {}

    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if (i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value)
{
    int icnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::SearchLast(int value)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (Arr[i] == value)
        {
            return i + 1;
        }
    }
    return -1;
}

int ArrSearch::EvenCount()
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int ArrSearch::OddCount()
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int ArrSearch::SumAll()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += Arr[i];
    }
    return sum;
}


int main()
{
    int value = 0;
    ArrSearch obj(5);

    obj.Accept();
    obj.Display();

    cout << "Enter the number to search: ";
    cin >> value;

    cout << "First Occurrence: " << obj.SearchFirst(value) << "\n";
    cout << "Last Occurrence: " << obj.SearchLast(value) << "\n";
    cout << "Frequency: " << obj.Frequency(value) << "\n";
    cout << "Even Count: " << obj.EvenCount() << "\n";
    cout << "Odd Count: " << obj.OddCount() << "\n";
    cout << "Sum of all elements: " << obj.SumAll() << "\n";

    return 0;
}
