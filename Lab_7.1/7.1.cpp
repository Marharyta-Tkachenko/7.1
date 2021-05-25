#include <iostream> 
#include <algorithm> 
#include <vector> 

using namespace std;

bool myfn(int i, int j) { return (i < j); }

int RandomNumber() { return (std::rand() % 100); }

void print(vector<int> a)
{
    for (int i : a)
        cout << i << " ";
    cout << endl;
}

int main()
{
    srand(unsigned(time(0)));

    int n;
    cout << "n = "; cin >> n;
    vector<int> a(n);

    generate(a.begin(), a.end(), RandomNumber);
    print(a);

    vector<int>::iterator max = max_element(a.begin(), a.end(), myfn);
    cout << "Max = " << *max << endl;

    int distance1 = distance(a.begin(), max);
    cout << "Distance1 = " << distance1 << endl;

    vector<int>::iterator min = min_element(a.begin(), a.end(), myfn);
    cout << "Min = " << *min << endl;

    int distance2 = distance(a.begin(), min);
    cout << "Distance2 = " << distance2 << endl;

    int tmp = *max;

    replace(a.begin() + distance1 - 1, a.begin() + distance1 + 1, *max, *min);
    replace(a.begin() + distance2 - 1, a.begin() + distance2 + 1, *min, tmp);

    print(a);
}