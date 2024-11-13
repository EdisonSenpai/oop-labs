#include "Canvas.h"

int main() {

    //Canvas canvas(40, 40);

    //canvas.DrawLine(0, 0, 40, 40, '*');
    //canvas.DrawLine(0, 40, 0, 40, '*');
    //canvas.DrawRect(5, 5, 15, 15, '+');
    //canvas.FillRect(5, 4, 15, 14, '-');
    //canvas.DrawCircle(20, 15, 5, '*');
    //canvas.FillCircle(20, 15, 3, '%');

    //canvas.Clear();

    //canvas.DrawRect(5, 5, 15, 10, '+');
    //canvas.FillRect(4, 4, 14, 9, '-');
    
    //canvas.Print();

    //canvas.Clear();

    Canvas canvas(30, 20);

    // draw a yellow circle for the face
    canvas.FillCircle(15, 10, 8, '.');

    // draw black circles for the eyes
    canvas.FillCircle(12, 8, 2, '*');
    canvas.FillCircle(18, 8, 2, '*');

    // draw a red rectangle for the mouth
    canvas.DrawRect(12, 12, 18, 14, '-');

    // print the canvas
    canvas.Print();

    canvas.Clear();

	return 0;

}