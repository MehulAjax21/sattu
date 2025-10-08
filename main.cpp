#include <opencv2/opencv.hpp>
#include <iostream>
#include <spdlog/spdlog.h>

int main(int argc, char** argv) 
{   
    // set log pattern
    spdlog::set_pattern("[%d-%m-%Y %H:%M:%S.%F][thread %t][%^%l%$] %v");

    spdlog::info("Welcome to Sattu App -> Drink Sattu, Forget Whey!!!!");
    spdlog::info("Dev2: Provide Path to Sattu Image");
      
    // Check if an image path argument is provided
    if (argc != 2) 
    {
            spdlog::critical("Usage: {} <ImagePath>", argv[0]);
            return -1; // Indicate error
    }
    
    cv::Mat image = cv::imread(argv[1]); // Replace with a valid image path

    if (image.empty()) 
    {
          spdlog::critical("Error: Could not open or find the image.");
          return -1;
    }

    cv::imshow("SATTU IMAGE", image);
    cv::waitKey(0);
    return 0;
}
