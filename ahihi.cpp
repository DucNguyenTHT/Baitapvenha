/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class list
{
private:
    int arr[1000];
    int dem;
public:
    list()
    {
        dem=0;
    };
    void add(int a)
    {
        arr[dem]=a;
        dem++;
    };
    void Delete(int a)
    {
        for(int i=a;i<dem;i++)
        {
            arr[i]=arr[i+1];
            dem--;
        }
    };
    friend iostream & operator << (iostream &out,const list &a)
    {
        for(int i=0;i<dem;i++)
        {
            out<<arr[i]<<", ";
        }
        out<<endl;
    };
};
int main()
{
    list a;
    a.add(5);
    a.add(10);
    a.add(100);
    cout<<a;
    a.Delete(2);
    cout<<a;
    return 0;
}
