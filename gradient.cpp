#include <iostream>
#include <fstream>

int main() {
    const int width = 640;
    const int height = 480;

    std::ofstream output("red_green.ppm");

    const int maxVal = 255;

    // green white checkerboard each square 10x10
    output << "P6" << std::endl;
    output << 640 << " " << 480 << std::endl;
    
    // green (0, 255, 0)
    // white (255, 255, 255)
    
    for (int row = 0; row < height; row += 1) {
        for (int col = 0; col < width; col += 10) {
            int rgb[3];
            if ((col/10)%2 == 0) {
                // color = green
                rgb[0] = 0;
                rgb[1] = 255;
                rgb[2] = 0;
            } else {
                // color = white
                rgb[0] = 255;
                rgb[1] = 255;
                rgb[2] = 255;
            }
            
            output << rgb[0] << " " << rgb[1] << " " << rgb[2] << " ";
         }
        output << std::endl;
    }
    
    output.close();

    return -1;
}