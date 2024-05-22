#include <iostream>
#include <bardrix/vector3.h>
#include <bardrix/point3.h>
#include <bardrix/ray.h>

int main()
{


	bardrix::point3 origin(0, 0, 0);
	bardrix::vector3 direction(10, 0, 0);
	bardrix::ray ray(origin, direction);

	std::cout << ray << std::endl;
	std::cout << "ray end: " << ray.get_end() << std::endl; // This outputs a point3

}