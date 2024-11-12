#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define mp make_pair
#define no cout << "No" << '\n'
#define yes cout << "Yes" << '\n'
#define endl '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    fast();
    int X, Z;
    float Y;
    cin >> X >> Y >> Z;

    int total_games = 4;
    int games_played = X + Y + Z;
    int games_left = total_games - games_played;
    float earned_points = (X * 1) + (Y * 0.5);
    float opponent_points = Z + (Y*0.5);

    if (earned_points > opponent_points) {
        yes;
    } else {
        if (games_left == 0) {
            no;
        } else {
            if(games_left == 1 && earned_points<=opponent_points)no;
            else yes;
        }
    }

    return 0;
}
