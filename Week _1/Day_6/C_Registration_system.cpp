#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define mp make_pair
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define endl '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    fast();
    int t;
    cin >> t;
    
    unordered_map<string, int> name_count; // Map to store the count of each name

    for (int i = 0; i < t; i++)
    {
        string name;
        cin >> name;

        if (name_count.find(name) == name_count.end())
        {
            // If name does not exist in the map, register it and print "OK"
            name_count[name] = 1; 
            cout << "OK" << endl;
        }
        else
        {
            // If name exists, find the next available numbered version
            int count = name_count[name];
            string new_name = name + to_string(count);
            while (name_count.find(new_name) != name_count.end())
            {
                count++;
                new_name = name + to_string(count);
            }

            // Register the new unique name
            cout << new_name << endl;
            name_count[name]++;
            name_count[new_name] = 1; // Add new_name to the map
        }
    }
    
    return 0;
}
