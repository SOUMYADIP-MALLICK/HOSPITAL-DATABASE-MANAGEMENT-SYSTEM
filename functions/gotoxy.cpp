void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if (!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord{ 0,0 };
		coord.X = x;
		coord.Y = y;
  SetConsoleCursorPosition(h, coord);
}
