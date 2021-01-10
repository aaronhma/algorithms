# Convex Hull

## About

A convex hull is the smallest convex polygon that contains all points of a given point set. Here, convexity means that a line segment between any two vertices of the polygon is completely inside the polygon. For example, the image below shows the convex hull of a point set.

![Image](resources/convex-hull/ex.png)

## Andrew's Algorithm

There are many efficient algorithms for constructing convex hulls. Perhaps the simplest among them is Andrew’s algorithm, which we will describe next. The algorithm first determines the leftmost and rightmost points in the set and then constructs the convex hull in two parts: first the upper hull and then the lower hull. Both parts are similar, so we can focus on constructing the upper hull.

First, we sort the points primarily according to x-coordinates and secondarily according to y-coordinates. After this, we go through the points and add each point to the hull. Always after adding a point to the hull, we make sure that the last line segment in the hull does not turn left. As long as it turns left, we repeatedly remove the second last point from the hull.

![Image](resources/convex-hull/algorithm.png)
