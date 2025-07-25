#include <iostream>
#include <ceres/version.h> // Make sure this path is correct for your installation

int main() {
    // Accessing version information (for debugging/verification)
    std::cout << "Ceres Solver Version: "
              << CERES_VERSION_MAJOR << "."
              << CERES_VERSION_MINOR << "." << std::endl;

    // Conditional compilation based on major version
#if CERES_VERSION_MAJOR < 2
    // Code for Ceres versions less than 2.x.x
    std::cout << "Using code compatible with Ceres Solver < 2.x.x" << std::endl;
    // Example: Old API for LocalParameterization might be used
    // ceres::LocalParameterization* local_param = new ceres::ExampleLocalParameterization();
#else
    // Code for Ceres versions 2.x.x and greater
    std::cout << "Using code compatible with Ceres Solver >= 2.x.x" << std::endl;
    // Example: New API for Manifold might be used
    // ceres::Manifold* manifold = new ceres::ExampleManifold();
#endif

    // You can also check minor versions or specific patches if needed
#if CERES_VERSION_MAJOR == 2 && CERES_VERSION_MINOR < 1
    std::cout << "This is Ceres 2.0.x" << std::endl;
#elif CERES_VERSION_MAJOR == 2 && CERES_VERSION_MINOR >= 1
    std::cout << "This is Ceres 2.1.x or later" << std::endl;
#endif

    return 0;
}