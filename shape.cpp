#include "shape.h"

Shape::Shape()
{

}

virtual void Line::Draw()
{
    this->painter.drawLine(this->point1, this->point2);
}
