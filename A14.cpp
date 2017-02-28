//Towers of Hanoi

#include <iostream>
#include <vector>
using namespace std;

int main()
{
        vector <int> t[3];
        int n, candidate,to,from,move=0;
        //move counts the move #
        cout << "Please enter an ODD number of rings to move: ";
        cin >> n;

        for (int i=n+1; i>=1; i--)
        {
                t[0].push_back(i);
        }
        t[1].push_back(n+1);
        t[2].push_back(n+1);

        from=0;
        to=1;
        candidate=1;

        while (t[1].size())
        {
                cout << "move number " << ++move << " transfer ring " << candidate << " from tower " << char(from+65) << " to tower " << char(to+65) << endl;
                t[to].push_back(t[from].back());
                t[from].pop_back();

                if (t[(to+1)%3].back() < t[(to+2)%3].back())
                        from = (to+1)%3;
                else
                        from = (to+2)%3;

                candidate = t[from].back();
                if ( candidate > t[from+1].back() )
                        to = (from+1)%3;
                else
                        to = (from+2)%3;
        }
        return 0;
}
