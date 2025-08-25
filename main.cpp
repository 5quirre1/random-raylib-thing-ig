extern "C"
{
#include <raylib.h>
}

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    InitWindow(500, 500, "greg"); // init the wndow
    // icon for the window
    Image icon = LoadImage("assets/greg.png");
    ImageFormat(&icon, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
    SetWindowIcon(icon);
    UnloadImage(icon);

    // variables
    const string message = "okokoklalalalokokoklalaloklalallokklalalal";
    int counter = 0;

    SetTargetFPS(60);

    // main
    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_SPACE)) counter += 3;
        else counter++;
        
        if (IsKeyPressed(KEY_ENTER)) counter = 0;

        ClearBackground(RAYWHITE);
        
        // draw
        BeginDrawing();
            int textWidth = MeasureText(message.c_str(), 20);
            int textHeight = 20;

            int x = (GetScreenWidth() - textWidth) / 2;
            int y = (GetScreenHeight() - textHeight) / 2;
            DrawText(TextSubtext(message.c_str(), 0, counter/10), x, y, 20, BLACK);
        EndDrawing();
        // end draw
    }
    // make window go bye
    CloseWindow();
    return 0;
}
