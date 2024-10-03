from PIL import Image

with Image.open('red_green.ppm') as img:
    img.save('output.png')