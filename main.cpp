#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{

    // game loop
    while (1) {
        int x;
        int y;
        int nextCheckpointX; // x position of the next check point
        int nextCheckpointY; // y position of the next check point
        int nextCheckpointDist; // distance to the next checkpoint
        int nextCheckpointAngle; // angle between your pod orientation and the direction of the next checkpoint
        cin >> x >> y >> nextCheckpointX >> nextCheckpointY >> nextCheckpointDist >> nextCheckpointAngle; cin.ignore();
        int thrust = 0;
        int opponentX;
        int opponentY;
        int thrust;
        cin >> opponentX >> opponentY; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if (abs(nextCheckpointAngle) < 5 && nextCheckpointDist > 4000){
            cout << nextCheckpointX << " " << nextCheckpointY << " " << "BOOST" << endl;
        } else {
            if (nextCheckpointAngle > 90 || nextCheckpointAngle < -90) {
                thrust = 10;
            } else {
                thrust = 100;
            } 
        cout << nextCheckpointX << " " << nextCheckpointY << " " << thrust << endl;
        }  

        // You have to output the target position
        // followed by the power (0 <= thrust <= 100)
        // i.e.: "x y thrust"
    }
}
