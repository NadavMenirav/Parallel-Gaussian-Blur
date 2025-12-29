# 🌟 Parallel Gaussian Blur

A high-performance image blurring application using the Gaussian Blur algorithm, parallelized with OpenMP for optimal speed.

## 📖 Overview

This project implements the well-known Gaussian Blur algorithm - the same technique used by professional tools like Photoshop to "polish" photos and reduce image noise. The algorithm applies a Gaussian kernel to blur images by averaging each pixel's value in relation to its neighbors.

**The twist?** This implementation is parallelized using OpenMP to achieve maximum performance! ⚡

## ✨ Features

- 🎨 **Gaussian Blur Algorithm** - Smoothly blurs images while preserving important structures
- 🚀 **OpenMP Parallelization** - Leverages multi-core processors for faster processing
- 📊 **Performance Metrics** - Built-in timing to measure execution speed
- 🖼️ **PNG Support** - Load and save images in PNG format with alpha channel preservation

## 🛠️ Technical Details

The parallelization focuses on:
- Efficient kernel computation and application
- Smart scheduling strategies for optimal load balancing
- Careful handling of shared resources
- Minimizing false sharing and synchronization overhead

## 🏗️ Project Structure

```
├── guassonFilter.h      # Header file with structure definitions
├── guassonFilter.c      # Core blur algorithm implementation
├── main.c               # Entry point with timing
├── input_images/        # Place your input images here
└── output_images/       # Blurred images will be saved here
```

## 🚀 Usage

1. Place your image in `input_images/`
2. Modify `main.c` to set your input/output paths and blur radius
3. Compile using the Makefile:
   ```bash
   make
   ```
4. Run the program:
   ```bash
   ./build/blur
   ```
5. Check the `output_images/` folder for your blurred result

## 📝 Parameters

- **Blur Radius**: Controls the intensity of the blur effect (default: 5)
- **Sigma**: Automatically calculated based on radius for optimal Gaussian distribution

## 🎓 Academic Context

This project was developed as Assignment 3 for Bar-Ilan CS 89-3312 - Parallel Systems Programming course, focusing on practical OpenMP optimization techniques.

---

Made with 💙 for parallel computing enthusiasts
