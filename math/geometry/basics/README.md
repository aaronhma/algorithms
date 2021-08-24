# Basic Geometry

## About

The problem of representing a point $(x, y)$ (also $z$ if $3$D) is complex. You can use a `pair`, `tuple`, `vector`, etc. All of these options are fine, though a user-defined structure is better, as you can override the $+$, $*$, $\div$, $-$, $<<$ and custom operations in an easy-to-manage format.

## Idea

We store the $(x, y)$ (also $z$ if $3$D) coordinates as a $type$ data type. (We initialize $type$ with `template <typename type>`). Then, we override the $+$, $*$, $\div$, $-$, $<<$ operations using `point_d operator_` (fill in _).

## Cross Product of $2$ Coordinates

### $2$D

The cross product of a $2$D coordinate is defined as a scalar $(x_1, y_1) * (x_2, y_2) = x_1y_2 - y_1 x_2$.

### $3$D

The cross product of a $3$D coordinate is defined as a $3$D coordinate $(x, y, z)$:

![Image](https://wikimedia.org/api/rest_v1/media/math/render/svg/1e44fd23f788d2f589f26344245765511e522e5b)
