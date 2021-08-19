#include <iostream>
using namespace std;
class c2;

class c1
{
    int value1;

    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << endl;
    }
};
class c2
{
    int value2;

    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(23);
    oc2.indata(27);

    exchange(oc1, oc2);

    cout << "The value after swaping the values of oc1 is ";
    oc1.display();
    cout << "The value after swaping the values of oc2 is ";
    oc2.display();

    return 0;
}