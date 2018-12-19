
// typedef struct Point Point;
#include <iostream>

enum ShapeType {circle, square};

struct Shape
{
  ShapeType itsType;
};


struct Point
{
  int x;
  int y;
};


struct Circle
{
  ShapeType itsType;
  double itsRadius;
  Point itsCenter;
};


struct Square
{
    ShapeType itsType;
    double itsSide;
    Point itsTopLeft;
};

void DrawSquare(struct Square *){std::cout << "Square" << std::endl;}
void DrawCircle(struct Circle *){std::cout << "Circle" << std::endl;}

typedef struct Shape * ShapePointer;

void DrawAllShapes(ShapePointer list[], int n)
{

  int i;

  for (i = 0; i < n; i++)
  {
    struct Shape * s = list[i];
    switch(s->itsType)
    {
      case square:
        DrawSquare((struct Square *)s);
        break;
      case circle:
        DrawCircle((struct Circle *)s);
        break;
    }
  }
}

int main()
{
  Circle cir;
  cir.itsCenter.x = 10;
  cir.itsCenter.y = 20;
  cir.itsType = circle;
  ShapePointer a[1] = {(Shape *)&cir};
  DrawAllShapes(a, 1);
  return 0;
}
