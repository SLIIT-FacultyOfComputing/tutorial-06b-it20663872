#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
void Box::setLength(int l)
{
  length = l;
}

void Box::setWidth(int w)
{
  width = w;
}

void Box::setHeight(int h)
{
  height = h;
}
       
void Box::getLength(int l)
{
  return length;
}

void Box::getWidth(int w)
{
  return width;
}

void Box::getHeight(int h)
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume()
{
  return (length*width*height);
}