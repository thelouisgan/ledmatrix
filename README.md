# ledmatrix
Displaying .BMP files on RGB LED Matrix (WS2812B) using Arduino

# Arduino Tutorial: Displaying BMP with NeoPixel RGB LED Matrix (WS2812B) on Arduino

Many/all tutorials online that I found are either not working or not completed with the instructions. This tutorial will guide you through the process of displaying .bmp files on an Arduino using an 8x32 LED matrix (but you can also use other). We will be using the LCD Image Converter application for Windows to convert the image files into a C array that can be easily integrated into an Arduino sketch.

## Prerequisites

- Arduino board with an [8x32 LED matrix](https://www.youtube.com/watch?v=8wGQWEosR48)
- LCD Image Converter application (Windows) installed from: [LCD Image Converter](https://lcd-image-converter.riuson.com/en/about/)
- Basic knowledge of Arduino programming and uploading sketches

## Steps

### 1. Installing the LCD Image Converter Application

- Download and install the LCD Image Converter application from the provided link.
- For users on other operating systems, set up a virtual machine to run the Windows application.

### 2. Preparing the Image

- Launch the LCD Image Converter application.
- Click on **File > Open** and select the image file you want to display on your LED matrix.
- Use the editing tools within the application to rotate the image if needed, ensuring it matches the orientation of your LED matrix.

### 3. Importing Preset Settings

- Go to **Options > Conversion**.
- Click on **Import...** and choose the [`LOUIS.xml`](LOUIS.xml) file provided in this repository. This preset is specifically designed for an 8x32 LED matrix.
- Modify the photo resolution in the application according to your LED matrix size if necessary.

### 4. Generating the C Array

- Click on **Show Preview** to see the converted image.
- Copy the generated C array.

### 5. Integrating the C Array into Arduino

- Open your Arduino IDE or preferred code editor.
- Load the Arduino code [`LOUIS_GAN_LED_MATRIX.ino`](LOUIS_GAN_LED_MATRIX.ino)
- Locate the section of the sketch where you want to display the image.
- Paste the copied C array into the sketch, making sure it is placed within the appropriate code section.
- If you have multiple images that you want to display in a loop, add another C array and paste it into the desired section of the sketch.

### 6. Uploading the Sketch

- Connect your Arduino board to your computer via USB.
- Select the correct board and port in the Arduino IDE.
- Click on the **Upload** button to compile and upload the sketch to the Arduino.

### 7. Testing

- After the sketch is successfully uploaded, the LED matrix should display the converted image.
- If you have multiple images in the sketch, they should play in a loop according to your code implementation.

## Additional Resources

- [LCD Image Converter Documentation](https://lcd-image-converter.riuson.com/en/about/documentation/)
- Arduino documentation and forums for troubleshooting Arduino-specific issues

Congratulations! You have successfully displayed .bmp files on an Arduino using an 8x32 LED matrix. Feel free to explore further and experiment with different images and LED matrix configurations.
