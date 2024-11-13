#include "Canvas.h"

Canvas::Canvas(int width, int height) {

	this->width = width;
	this->height = height;

	matrix = new char*[height];

	for (int i = 0; i < height; i++) {

		matrix[i] = new char[width];

		for (int j = 0; j < width; j++)
			matrix[i][j] = ' ';

	}

}

Canvas::~Canvas() {

	for (int i = 0; i < height; i++)
		delete[] matrix[i];

	delete[] matrix;

}

void Canvas::SetPoint(int x, int y, char ch) {

	if (x < 0 || x >= width || y < 0 || y >= height)
		return;

    this->matrix[y][x] = ch;

}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {

	// Bresenham's line algorithm
	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);
	int sx = (x1 < x2) ? 1 : -1;
	int sy = (y1 < y2) ? 1 : -1;
	int err = dx - dy;

	while (true) {
		SetPoint(x1, y1, ch);

		if (x1 == x2 && y1 == y2) {
			break;
		}

		int e2 = 2 * err;
		if (e2 > -dy) {
			err -= dy;
			x1 += sx;
		}
		if (e2 < dx) {
			err += dx;
			y1 += sy;
		}
	}

}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {

	/*
	int x1, y1;

	for (int i = 0; i <= 360; i++) {

		x1 = static_cast<int>(x + round(ray * cos(i * M_PI / 180)));
		y1 = static_cast<int>(x + round(ray * cos(i * M_PI / 180)));

		SetPoint(x1, y1, ch);

	}
	*/

	int cx = ray;
	int cy = 0;
	int err = 0;

	while (cx >= cy)
	{
		SetPoint(cx + x, cy + y, ch);
		SetPoint(cy + x, cx + y, ch);
		SetPoint(-cx + x, cy + y, ch);
		SetPoint(-cy + x, cx + y, ch);
		SetPoint(-cx + x, -cy + y, ch);
		SetPoint(-cy + x, -cx + y, ch);
		SetPoint(cx + x, -cy + y, ch);
		SetPoint(cy + x, -cx + y, ch);

		if (err <= 0)
		{
			cy += 1;
			err += 2 * cy + 1;
		}
		if (err > 0)
		{
			cx -= 1;
			err -= 2 * cx + 1;
		}
	}

}

void Canvas::FillCircle(int x, int y, int ray, char ch) {

	for (int i = x - ray; i <= x + ray; i++)
		for (int j = y - ray; j <= y + ray; j++)
			if (pow(i - x, 2) + pow(j - y, 2) <= pow(ray, 2))
				SetPoint(i, j, ch);

}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
	
	/*
	DrawLine(left, top, right, top, ch);
	DrawLine(left, bottom, right, bottom, ch);
	DrawLine(left, top, bottom, bottom, ch);
	DrawLine(right, top, bottom, bottom, ch);
	*/

	// Check if the given coordinates are valid
	if (left >= width || right < 0 || top >= height || bottom < 0) {
		return;
	}

	// Clip the rectangle to the canvas boundaries
	left = std::max(0, left);
	top = std::max(0, top);
	right = min(width - 1, right);
	bottom = min(height - 1, bottom);

	// Draw the horizontal lines
	DrawLine(left, top, right, top, ch);
	DrawLine(left, bottom, right, bottom, ch);

	// Draw the vertical lines
	DrawLine(left, top, left, bottom, ch);
	DrawLine(right, top, right, bottom, ch);

}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {

	for (int i = top; i <= bottom; i++)
		for (int j = left; j <= right; j++)
			SetPoint(j, i, ch);

}

void Canvas::Print() {

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			cout << matrix[i][j];

		cout << '\n';
	}
}

void Canvas::Clear() {

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			matrix[i][j] = ' ';
	}

}