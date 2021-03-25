# Pi_calculator
This project gives an approximate value for pi using the following method:
 - we have a square with the center in (1/2, 1/2) and the lwidth of 1;
 - let's consider the inscribed circle in the square;
 - we generate n random points with coordinates between 0 and 1 and we count the number of points inside the circle in variable inCircle;
 - we compute n / inCircle which is about pi/4;
 - the approximate value for pi is inCircle/n * 4.
