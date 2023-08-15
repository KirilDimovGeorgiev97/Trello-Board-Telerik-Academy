// TrelloBoard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <type_traits>
#include <iostream>
#include <PriorityType.h>
#include <EnumTemplate.h>
#include <BugStatus.h>

//enum class EC { a, b };
//enum E { c, d };
//
//template <typename T, typename V = void>
//struct test : std::false_type {};
//
//template <typename T>
//struct test<T, decltype((void)+T{})> : std::true_type {};
//
//template <typename T>
//using is_enum_class = std::integral_constant<bool, !test<T>::value && std::is_enum<T>::value>;
//
//enum class A {
//    a = 1,
//    b = 69,
//    c = 666
//};
//
//template <typename Enumeration>
//auto as_integer(Enumeration const value)
//-> typename std::underlying_type<Enumeration>::type
//{
//    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
//}

class PriorityType2 {
public:
    // Default constructor
    PriorityType2() {
        // Initialize with some default values if needed
    }

    // Constructor with an int parameter
    PriorityType2(int a) {
        // Your implementation here
    }

    // Rest of your code...
};

template <typename T2>
class EnumTemplate2 {
private:
    T2 val_T;

public:
    // Constructor taking a reference to a PriorityType object
    EnumTemplate2(const T2& A) : val_T(A) {
        // Constructor implementation here
    }

    // Rest of your code...
};


/*int main()
{
    //static_assert(is_enum_class<EC>::value, "!");
    //static_assert(!is_enum_class<E>::value, "!");
    //static_assert(!is_enum_class<int>::value, "!");

    //A a = A::c;
    //std::cout << as_integer(a) << std::endl;
    
    PriorityType* a = new PriorityType();
    
    EnumTemplate<PriorityType, PriorityType::PriorityTypeValues>z(a,PriorityType::PriorityTypeValues::MEDIUM);
    z.changeStatus(1);
    PriorityType b = z.getT();

    BugStatus f();

    //PriorityType2 a;
    //EnumTemplate2<PriorityType2> z(a);

    //// Using the constructor with an int parameter for PriorityType
    //PriorityType2 b(0);
    //EnumTemplate2<PriorityType2> y(b);

}*/

#include <stdio.h>
#include <ctime>

class base
{
public:

    void func1() {
        func2();
    }
    void func2() {
        printf(" I am in base:func2() \n");
    }
};

class derived : public base
{
public:
    void func1() {
        base::func1();
    }
    void func2() {
        printf(" I am in derived:func2() \n");
    }
};

int main()
{
    time_t start = time_t(0);
    time(&start);
    long product;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 100000; j++)
        {
            product = i * j;
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 100000; j++)
        {
            product = i * j;
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 100000; j++)
        {
            product = i * j;
        }
    }
    time_t finish = time_t(0);
    time(&finish);
    cout << "Time required = " << difftime(start, finish) << " seconds";
    //base* d = new derived();
    //d->func1();
    //return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
